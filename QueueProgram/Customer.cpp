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
	this::x = x;//x serves as the max value
}

int Customer::getArrivalMinute() { return arrivalMinute; }
int Customer::getDepartureMinute() { return departureMinute; }
int Customer::getServiceTime() { return serviceTime; }

int Customer::generateArrival()
{
	arrivalMinute = (rand() % (x + 1)) +currentTime; // returns a value between 0 and x  .  This needs to be added to the clock in the driver
	//if we have a global variable for current time, we can add it here
}
int Customer::generateServiceTime()
{
    serviceTime = (rand() % (x+1))  //returns a value between 0 and x  . 
}
int Customer::generateDeparture()
{
    departureMinute = currentTime + serviceTime;
}
