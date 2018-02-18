/*
* File:   Queue.cpp
* Author: jmbind1@ilstu.edu
*
* Created on February 2, 2018, 4:15 PM
*/

#include "Queue.h"

#define NULL nullptr

Queue::Queue() {
	size = 0;
    head = NULL;
    tail = NULL;
}

void Queue::enqueue(Customer cust) {
	node *temp = new node;
	temp->data = cust;
	temp->next = NULL;

	if (head == NULL) {
		head = tail = temp;
        head->next = NULL;
	}
	else {
		tail->next = temp;
		tail = temp;
	}
    
    delete temp;
	size++;
}

Customer Queue::getCustomer() {
	return (*head).data;
}

void Queue::dequeue() {
	node* temp = new node;
	temp = head;
	head = head->next;

    delete temp;
	size--;
}

int Queue::getSize() {
	return size;
}
