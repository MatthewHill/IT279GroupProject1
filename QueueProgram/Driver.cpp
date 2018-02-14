#include<iostream>
#include"Clock"
#include"Customer"
#include"Queue"
using namespace std;
int main() //Not sure if we had an idea for a driver class so I started this.
{
	cout << "Enter a value X for maximum arrival and service delay"
	cin >> input;
	X = input;

	cout << "The maximum number of cutomers in the queue at one time was: " << MaxCustomers << "\n"; //Note that the number of customers in the queue does not include the one being waited on
	cout << "The longest wait any one customer experiences was: " << MaxWait << "\n" //wait does not include service time
}