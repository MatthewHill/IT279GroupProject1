/* 
 * File:   Stack.h
 * Author: jmbind1@ilstu.edu
 *
 * Created on February 7, 2018, 7:08 PM
 */

#ifndef STACK_H
#define STACK_H

struct node{
    int x;
    int y;
    char command;
    node *next;
};

class Stack {
public:
    Stack();
    void push(int x, int y, char command);
    void pop();
    void display();
    node readTop();
    bool isEmpty();
private:
    node top;
};

#endif /* STACK_H */

