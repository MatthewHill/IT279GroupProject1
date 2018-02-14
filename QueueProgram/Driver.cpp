#include <iostream>
#include <string>
#include "Clock.h"
#include "Customer.h"
#include "Queue.h"

using namespace std;

int main() //Not sure if we had an idea for a driver class so I started this.
{
	int MaxCustomers; //Most customers in line
	int MaxWait; //Max wait time for all customers
	int arrival; //placeholder for arrival time
	int customerNumber = 1; //placeholder for customer numbers
	string input;
	cout << "Enter a value X for maximum arrival and service delay" //1.	Choose a random integer between 1 and x to determine the minute at which the first customer arrives.
		cin >> input;
	Clock myClock(0, input); //initialize clock to 0 and a max value of user choosing
	arrival = myClock.generateArrival(); //generate the arrival time for the first Customer
	Customer myCustomer(arrival, 0, 0, 1); //generate customer number 1
	while (myClock.currentTime <= 760)
	{
		if (myClock.currentTime == arrival)
		{
			cout << "Customer number: " << myCustomer.customerNumber << " has arrived\n"; //output message
			myCustomer.serviceTime = myClock.generateServiceTime(); //generating random service time

			customerNumber++; //increment the customer counter
			arrival = myClock.generateArrival(); //generate the arrival time for the next customer
		}
	/*	2.	At the first customer’s arrival time :
		Print an arrival message;
		Determine customer’s service time(random integer from 1 to x);
		Begin servicing the customer;
		Schedule the arrival time of the next customer(random integer 1 to x added to the current time) */


	}
	cout << "The maximum number of customers in the queue at one time was: " << MaxCustomers << "\n"; //Note that the number of customers in the queue does not include the one being waited on
	cout << "The longest wait any one customer experiences was: " << MaxWait << "\n"; //wait does not include service time
}
