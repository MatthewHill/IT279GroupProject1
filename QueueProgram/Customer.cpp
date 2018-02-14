/*
* File:   Customer.cpp
* Author: jmbind1@ilstu.edu
*
* Created on February 7, 2018, 6:59 PM
*/

#include "Customer.h"
#include <cstdlib>
Customer::Customer() {
	Customer(0, 0, 0 ,0);
}

Customer::Customer(int arrivalMinute, int departureMinute, int serviceTime) {
	this::arrivalMinute = arrivalMinute;
	this::departureMinute = departureMinute;
	this::serviceTime = serviceTime;
	this::customerNumber = customerNumber;
}

int Customer::getArrivalMinute() { return arrivalMinute; }
int Customer::getDepartureMinute() { return departureMinute; }
int Customer::getServiceTime() { return serviceTime; }

