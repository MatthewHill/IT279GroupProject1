/*
* File:   Queue.cpp
* Author: jmbind1@ilstu.edu
*
* Created on February 2, 2018, 4:15 PM
*/

#include "Queue.h"
#include <iostream>

#define NULL nullptr

// No-arg Constructor
Queue::Queue() {
	size = 0;
    head = NULL;
    tail = NULL;
    temp = NULL;
}

// Copy Constructor
Queue::Queue(const Queue &obj){
    size = obj.size;
    head = obj.head;
    tail = obj.tail;
    temp = obj.temp;
}

// Assignment Operator
Queue& Queue::operator = (const Queue &obj){
    size = obj.size;
    head = obj.head;
    tail = obj.tail;
    temp = obj.temp;
}

// Adds a customer to the back of the queue.
void Queue::enqueue(Customer cust) {
	temp = new node;
	temp->data = cust;
	temp->next = NULL;

	if (head == NULL) {
		head = tail = temp;
        head->next = NULL;
	}
	else {
		tail->next = temp;
		tail = temp;
        tail->next = NULL;
	}

	size++;
}

// Returns the Customer at the front of the queue.
Customer Queue::getCustomer() {
	return head->data;
}

// Removes the Customer at the front of the queue.
void Queue::dequeue() {
    if(head == NULL){
        std::cout<<"Empty queue.\n";    
    }else{
        head = head->next;
    }
}

// Returns the size of the queue as int.
int Queue::getSize() {
	return size;
}
