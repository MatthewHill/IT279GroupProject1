#include <iostream>
#include <string>
#include "Clock.h"
#include "Customer.h"
#include "Queue.h"
#include <vector>

using namespace std;

int main() //Not sure if we had an idea for a driver class so I started this.
{
	int MaxCustomers; //Most customers in line
	int MaxWait; //Max wait time for all customers
	int arrival; //placeholder for arrival time
	int customerNumber = 1; //placeholder for customer numbers
	int i = 1; //customer index
	string input;
	Clock myClock(0, input); //initialize clock to 0 and a max value of user choosing
	Queue myQueue(); //initialize Queue

	//1.	Choose a random integer between 1 and x to determine the minute at which the first customer arrives.
	cout << "Enter a value X for maximum arrival and service delay" 
	cin >> input;
	arrival = myClock.generateArrival(); //generate the arrival time for the first Customer
	vector<Customer> custVector(1, Customer()); //Creates an Array of Customers with default constructor
	custVector[0].setCustomerNumber(1); //generate customer number 1
	custVector[0].setArrivalMinute(arrival);

	/*	2.	At the first customer’s arrival time :
		Print an arrival message;*/
		cout << "Customer  " << custVector[0].customerNumber << " has arrived at "<< custVector[0].arrivalTime << "\n";
	/*	Determine customer’s service time(random integer from 1 to x); */
		custVector[1].setServiceTime(myClock.generateServiceTime());
		/*Begin servicing the customer;
		Schedule the arrival time of the next customer(random integer 1 to x added to the current time) */
		arrival = myClock.generateArrival();
		custVector.push_back(Customer()); //Pushes a default customer into the Vector
		custVector[1].setArrivalMinute(arrival);
		custVector[1].setCustomerNumber(2);
		//	3.	For each subsequent minute of the day :
		while (myClock.currentTime <= 760)
		{
		//If the next customer arrives,
			if (myClock.currentTime == arrival)
			{
				//Print an arrival message;
				cout << "Customer  " << custVector[i].customerNumber << " has arrived at " << custVector[i].arrivalTime << "\n";
				//Enqueue the customer;
				myQueue.enqueue(custVector[i])
				//Schedule the arrival time of the next customer;
				custVector.push_back(Customer());
				arrival = myClock.generateArrival()
				custVector[i + 1].setArrivalMinute(arrival);
				//If service was completed for the last customer :
				if (myClock.currentTime == custVector[i].departureMinute)
				{
					//Print a departure message;
					cout << "Customer " << custVector[i].customerNumber << " left at " << custVector[i].departureMinute << "\n";
						//Dequeue the next customer to be serviced;
					custVector[i].dequeue();
						//Determine customer’s service completion time;
				}
			}
			myClock.currentTime = myClock.currentTime + 1;
	}
	cout << "The maximum number of customers in the queue at one time was: " << MaxCustomers << "\n"; //Note that the number of customers in the queue does not include the one being waited on
	cout << "The longest wait any one customer experiences was: " << MaxWait << "\n"; //wait does not include service time
}
