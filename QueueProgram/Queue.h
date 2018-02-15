/*
* File:   Queue.h
* Author: jmbind1@ilstu.edu
*
* Created on February 2, 2018, 4:15 PM
*/
#include "Customer.h"
#ifndef CUSTOMQUEUE_H
#define CUSTOMQUEUE_H

struct node {
	Customer data;
	node* next;
};

class CUSTOMQueue {
public:
	CUSTOMQueue();

	void enqueue(Customer cust);
	Customer getCustomer();
	Customer dequeue();
	int getSize();
private:
	node* head; 
	node* tail;
	int size;
};

#endif /* QUEUE_H */