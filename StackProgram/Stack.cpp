/* stack.cpp, implementation of stack.h */

#include "Stack.h"
#include <iostream>

Stack::Stack(){ top = 0;}
Stack::~Stack(){}

void Stack::push(int x, int y, char command){
  node *newNode = new node();
  newNode->x = x;
  newNode->y = y;
  newNode->command = command;
  newNode->next = top;
  top = newNode;
}

void Stack::pop(){
  node *temp = top;
  if(top==NULL) {
    std::cout<<"Empty stack.\n";  //should never see this message, should be caught
    return;
  }  
  top = top->next;
  delete(temp);  //free memory allocated to memory in list
}

//display entire stack - each node displayed separately
void Stack::display(){
  node *temp = top;
  while(temp!=NULL) {
    std::cout<<"\nx: "<<temp->x<<"\ny: "<<temp->y<<"\ncommand: "<<temp->command;
    temp=temp->next;
  }
  std::cout<<"\n";
  delete(temp);  //free memory
}

//display top of stack, for testing purposes
void Stack::displayTop(){
  node *temp = top;
  if(top!=NULL) {
    std::cout<<temp->x<<"\n";
  } else if(top==NULL) {    
  std::cout<<"0\n";
  }
  delete(temp);  //free memory
}

bool Stack::isEmpty(){
  if(top == 0)
    return 1;
  else
    return 0;
}