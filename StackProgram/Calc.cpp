/*
 * Calc.cpp
 * Need to complete redo/undo
 */
#include <iostream>
#include <sstream>
#include <string>
#include "Stack.h"
using namespace std;
int main()
{
	//The possible commands will be +, -, *, /, %, C, U, R and Q
	string choice;
	Stack myStack;   //main stack
	Stack undoStack; //stack for storing undo/redo
	int tempx, tempy;//temp for undoStack
	char tempc;      //temp for undoStack
	struct node *temp; //temp for undoStack
	int screenOutput = 0;
	
	//user interface
	cout << "Enter a command or an Arithmetic operation followed by a number\n"
		"Enter + , - , * , / , %   Followed by a number to execute that operation\n"
		"Enter C to clear\n"
		"Enter U to undo the previous operation\n"
		"Enter R to redo the previous operation\n"
		"Enter Q to quit\n\n";
		"e.g. +300 will add 300\n";
		"------------------------------------------\n";
	myStack.displayTop(); //show 0 for empty stack
	cout << ">";  //make the initial prompt symbol for user
	getline(cin, choice);
	
	while (choice != "Q")  //As long as the user does not enter Q the program will run
	{	  
		if (choice.at(0) == '+')
		{
			choice.erase(0, 1);  //Removes the forward operator so only a number is left			
			myStack.push(screenOutput, stoi(choice), '+');  //Pushes the previous value, the modifying value, and the modifying operator onto the stack
			screenOutput = screenOutput + stoi(choice);  //Changes the value on the screen and performs the arithmetic
			cout << screenOutput << endl;  //display the new value
			cout << ">";  //user prompt
		}
		else if (choice.at(0) == '-')
		{
			choice.erase(0, 1);  //Removes the forward operator so only a number is left
			myStack.push(screenOutput, stoi(choice), '-');  //Pushes the previous value, the modifying value, and the modifying operator onto the stack
			screenOutput = screenOutput - stoi(choice);  //Changes the value on the screen and performs the arithmetic
			cout << screenOutput << endl;  //display the new value
			cout << ">";  //user prompt
		}
		else if (choice.at(0) == '*')
		{
			choice.erase(0, 1);  //Removes the forward operator so only a number is left
			myStack.push(screenOutput, stoi(choice), '*');  //Pushes the previous value, the modifying value, and the modifying operator onto the stack
			screenOutput = screenOutput * stoi(choice);  //Changes the value on the screen and performs the arithmetic
			cout << screenOutput << endl;  //display the new value
			cout << ">";  //user prompt
		}
		else if (choice.at(0) == '/')
		{
			choice.erase(0, 1);  //Removes the forward operator so only a number is left
			myStack.push(screenOutput, stoi(choice), '/');  //Pushes the previous value, the modifying value, and the modifying operator onto the stack
			screenOutput = screenOutput / stoi(choice);  //Changes the value on the screen and performs the arithmetic
			cout << screenOutput << endl;  //display the new value
			cout << ">";  //user prompt
		}
		else if (choice.at(0) == '%')
		{
			choice.erase(0, 1);  //Removes the forward operator so only a number is left
			myStack.push(screenOutput, stoi(choice), '%');  //Pushes the previous value, the modifying value, and the modifying operator onto the stack
			screenOutput = (screenOutput % stoi(choice));  //Changes the value on the screen and performs the arithmetic
			cout << screenOutput << endl;  //display the new value
			cout << ">";  //user prompt
		}
		else if (choice.at(0) == 'C')
		{
			choice = "";
			screenOutput = 0;
			while (myStack.isEmpty() == false)
			{
				myStack.pop();
			}
			cout << screenOutput << endl;  //display the new value
			cout << ">";  //user prompt
		}
		else if (choice.at(0) == 'U')
		{	
			if ( myStack.isEmpty() )
			  cout << "No operations to undo\n";
			//copy top of myStack to undoStack
			else {
			  
			}
			//pop value off of myStack
			myStack.pop();  
			cout << screenOutput << endl;  //output previous value before the redo operation
			cout << ">";  //user prompt
			
		}
		else if (choice.at(0) == 'R')		  
		{		  
			if ( undoStack.isEmpty() ) 
			  cout << "No operations to redo\n";			  
			//copy top of undoStack to myStack
			else {
			  
			}
			//pop value off of undoStack
			undoStack.pop();
			cout << screenOutput << endl;  //output previous value before the redo operation
			cout << ">";  //user prompt
		}
		else if (choice.at(0) == 'Q')
		{
			break;
		}
		else
		{
			cout << "That command was not recognized, try again\n";
			cout << ">"; //user prompt
		}		
		getline(cin, choice);
	}

return 0;
}