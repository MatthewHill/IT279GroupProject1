/*
* File:   Customer.cpp
* Author: jmbind1@ilstu.edu
*
* Created on February 7, 2018, 6:59 PM
*/

#include "Customer.h"
#include <cstdlib>



Customer::Customer() {
	Customer(0, 0, 0, 0);
}

Customer::Customer(int arrivalMinute, int departureMinute, int serviceTime, int customerNumber) {
	Customer::arrivalMinute = arrivalMinute;
	Customer::departureMinute = departureMinute;
	Customer::serviceTime = serviceTime;
	Customer::customerNumber = customerNumber;
}

Customer::Customer(const Customer &obj){
    arrivalMinute = obj.arrivalMinute;
    departureMinute = obj.departureMinute;
    serviceTime = obj.serviceTime;
    customerNumber = obj.customerNumber;
}

Customer& Customer::operator = (const Customer &obj){
    arrivalMinute = obj.arrivalMinute;
    departureMinute = obj.departureMinute;
    serviceTime = obj.serviceTime;
    customerNumber = obj.customerNumber;
}

int Customer::getArrivalMinute() { return arrivalMinute; }
int Customer::getDepartureMinute() { return departureMinute; }
int Customer::getServiceTime() { return serviceTime; }
int Customer::getCustomerNumber() { return customerNumber; }
void Customer::setCustomerNumber(int N) { customerNumber = N; }
void Customer::setServiceTime(int T) { serviceTime = T; }
void Customer::setArrivalTime(int A) { arrivalMinute = A; }
void Customer::setDepartureTime(int D) { departureMinute = D; }
