/* stack.cpp, implementation of stack.h */

#include "Stack.h"
#include <iostream>

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
    std::cout<<"Empty stack.\n";
    return;
  }  
  top = top->next;
  delete(temp);  //free memory allocated to memory in list
}

void Stack::display(){
  node *temp = top;
  while(temp!=NULL) {
    std::cout<<"\nx: "<<temp->x<<"\ny: "<<temp->y<<"\ncommand: "<<temp->command;
    temp=temp->next;
  }
  std::cout<<"\n";
}

bool Stack::isEmpty(){
    if(top==NULL)
      return true;
    return false;    
}