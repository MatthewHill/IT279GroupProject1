/* 
 * File:   Stack.h
 * Author: jmbind1@ilstu.edu
 *
 * Created on February 7, 2018, 7:08 PM
 */

#ifndef STACK_H
#define STACK_H
#include <stddef.h>

class Stack {
private:  
struct node{
    int x;
    int y;
    char command;
    node *next;
};
node *top;

public:    
    void push(int x, int y, char command);
    void pop();
    void display();    
    bool isEmpty();    
};

#endif /* STACK_H */
