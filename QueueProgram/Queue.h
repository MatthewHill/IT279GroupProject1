/* 
 * File:   Queue.h
 * Author: jmbind1@ilstu.edu
 *
 * Created on February 2, 2018, 4:15 PM
 */

#ifndef QUEUE_H
#define QUEUE_H

struct node{
    Customer data;
    node *next;
};

class Queue {
public:
    Queue();
    
    int enqueue(Customer cust);
    Customer dequeue();
    int getSize();
private:
    node head, tail;
    int size;
};

#endif /* QUEUE_H */

