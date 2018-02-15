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
	head = tail = NULL;
}

int Queue::enqueue(Customer cust) {
	node *temp = new node;
	temp->data = cust;
	temp->next = NULL;

	if (head == NULL) {
		head = temp;
		tail = temp;
		temp = NULL;
	}
	else {
		tail->next = temp;
		tail = temp;
	}

	size++;

	return 0;
}

Customer Queue::getCustomer() {
	return head.data;
}

Customer Queue::dequeue() {
	node *temp = new node;
	temp = head;
	head = head->next;

	size--;

	Customer cust = temp.data;    // Workaround to return Customer without causing a memory leak.
	delete temp;
	return cust;
}

int Queue::getSize() {
	return size;
}