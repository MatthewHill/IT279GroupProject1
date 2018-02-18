/* stack.cpp, implementation of stack.h */

#include "Stack.h"
#include <iostream>

#define NULL nullptr

Stack::Stack(){ top = 0;}

// Copy Constructor
Stack::Stack(const Stack &obj){
    top = obj.top;
}

// Assignment Operator
Stack& Stack::operator = (const Stack &obj){
    top = obj.top;
}

// Destructor
Stack::~Stack(){
    if(top != NULL)
        delete top;
}

// Pushes a new node to the top of the stack with two ints and a command.
void Stack::push(int x, int y, char command){
    node *newNode = new node();
    newNode->x = x;
    newNode->y = y;
    newNode->command = command;
    newNode->next = top;
    top = newNode;

    delete newNode;
}

// Returns true if stack is empty.
bool Stack::isEmpty(){
  return top == NULL;
}

// Removes the top element from the stack.
void Stack::pop() {
  
  if(isEmpty())     
    return;
  else {
  node *temp = new node();
  temp = top;
  top = top->next;
  temp->next = NULL;
  delete(temp);  //free memory allocated to memory in list
  }
}

//display entire stack - each node displayed separately
void Stack::display(){
  node *temp = top;
  while(temp!=0) {
    std::cout<<"\nx: "<<temp->x<<"\ny: "<<temp->y<<"\ncommand: "<<temp->command;
    temp=temp->next;
  }
  std::cout<<"\n";
  delete(temp);  //free memory
}

//display top of stack, for testing purposes
void Stack::displayTop(){
  node *temp = top;
  if(top!=0) {
    std::cout<<temp->x<<"\n";
  } else if(top==0) {    
  std::cout<<"0\n";
  }
  delete(temp);  //free memory
}

//get x value from top of stack
int Stack::getx(){
  int x;
  node *temp = top;
  x = temp->x; 
  return x;  
}

//get y value from top of stack
int Stack::gety(){
  int y;
  node *temp = top;
  y = temp->y; 
  return y;
}

//get command value from top of stack
char Stack::getc(){
  char c;
  node *temp = top;
  c = temp->command;  
  return c;
}
