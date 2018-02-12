/* This rendition should be modified after Stack.h and Stack.cpp are flushed out.  I have also not yet decided how to implement the Undo and Redo methods. - Matthew*/
#include <iostream>
#include <sstream>
#include <string>
#include "Stack.h"
#include "Stack.cpp"
using namespace std;
int main()
{
	//The possible commands will be +, -, *, /, %, C, U, R and Q
	string choice;
	Stack myStack;
	int screenOutput = 0;
	cout << "Enter a command or an Arithmatic operation followed by a number" << "\n";
	cout << "Enter + , - , * , / , %   Followed by a number to execute that operation" << "\n";
	cout << "Enter C to clear, Enter U to undo the previous operation , Enter R to redo the previous operation, Enter Q to quit";
	getline(cin, choice);
	while (choice != "Q")  //As long as the user does not enter Q the program will run
	{
		if (choice.at(0) == '+')
		{
			choice.erase(0, 1);  //Removes the forward operator so only a number is left
			myStack.push(screenOutput, stoi(choice), '+');  //Pushes the previous value, the modifying value, and the modifying operator onto the stack
			screenOutput = screenOutput + stoi(choice);  //Changes the value on the screen and performs the arithmetic
		}
		else if (choice.at(0) == '-')
		{
			choice.erase(0, 1);  //Removes the forward operator so only a number is left
			myStack.push(screenOutput, stoi(choice), '-');  //Pushes the previous value, the modifying value, and the modifying operator onto the stack
			screenOutput = screenOutput - stoi(choice);  //Changes the value on the screen and performs the arithmetic
		}
		else if (choice.at(0) == '*')
		{
			choice.erase(0, 1);  //Removes the forward operator so only a number is left
			myStack.push(screenOutput, stoi(choice), '*');  //Pushes the previous value, the modifying value, and the modifying operator onto the stack
			screenOutput = screenOutput * stoi(choice);  //Changes the value on the screen and performs the arithmetic
		}
		else if (choice.at(0) == '/')
		{
			choice.erase(0, 1);  //Removes the forward operator so only a number is left
			myStack.push(screenOutput, stoi(choice), '/');  //Pushes the previous value, the modifying value, and the modifying operator onto the stack
			screenOutput = screenOutput / stoi(choice);  //Changes the value on the screen and performs the arithmetic
		}
		else if (choice.at(0) == '%')
		{
			choice.erase(0, 1);  //Removes the forward operator so only a number is left
			myStack.push(screenOutput, stoi(choice), '%');  //Pushes the previous value, the modifying value, and the modifying operator onto the stack
			screenOutput = (screenOutput % stoi(choice));  //Changes the value on the screen and performs the arithmetic
		}
		else if (choice.at(0) == 'C')
		{
			choice = "";
			screenOutput = 0;
			while (myStack.isEmpty() == false)
			{
				myStack.pop();
			}
		}
		else if (choice.at(0) == 'U') //This is intended to undo the last choice
		{
			myStack.pop();  
			// How do we implement the Stack method and allow the user to redo operations?
			//Should we make a seperate Stack for undo methods?
		}
		else if (choice.at(0) == 'R')
		{
		 //pops the first value from the RedoStack and pushes it onto the original stack?
		}
		else if (choice.at(0) == 'Q')
		{
			break;
		}
		else
		{
			cout << "That command was not recognized";
		}
		cout << "Enter a command or an Arithmatic operation followed by a number" << "\n";
		cout << "Enter + , - , * , / , %   Followed by a number to execute that operation" << "\n";
		cout << "Enter C to clear, Enter U to undo the previous operation , Enter R to redo the previous operation, Enter Q to quit";
		getline(cin, choice);
	}

return 0;
}