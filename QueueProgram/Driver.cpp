#include<iostream>
#include"Clock"
#include"Customer"
#include"Queue"
using namespace std;
int main() //Not sure if we had an idea for a driver class so I started this.
{
	int MaxCustomers; //Most customers in line
	int MaxWait; //Max wait time for all customers
	cout << "Enter a value X for maximum arrival and service delay"
	cin >> input;
	Clock myClock(0,input); //initialize clock to 0 and a max value of user choosing
	Clock.generateArrival(); //generate the arrival time for the first Customer
	cout << "The maximum number of cutomers in the queue at one time was: " << MaxCustomers << "\n"; //Note that the number of customers in the queue does not include the one being waited on
	cout << "The longest wait any one customer experiences was: " << MaxWait << "\n" //wait does not include service time
}