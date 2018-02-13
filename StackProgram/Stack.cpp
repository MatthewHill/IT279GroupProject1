/* 
 * File:   Stack.cpp
 * Author: jmbind1@ilstu.edu
 * 
 * Created on February 7, 2018, 7:08 PM
 */

#include "Stack.h"

Stack::Stack() {
    top = 0;
}

void Stack::push(int x, int y, char command)
{
    node* temp = new node;
    temp->x = x;
    temp->y = y;
    temp->command = command;
    
    if(top == 0)
    {
        temp->next = 0;
    }
    else
    {	
        temp->next = top;
    }
    
    top = temp;
    delete temp;
}

void Stack::pop(){
    if(top == 0)
        return;
    else{
        top = top->next;
    }
}

void Stack::display(){
    
}

node Stack::readTop(){
    return top;
}

bool Stack::isEmpty(){
    return (top==0);
}

