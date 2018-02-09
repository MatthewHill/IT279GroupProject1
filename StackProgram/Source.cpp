#include <iostream>
#include <sstream>
#include <string>
#include "Stack.h"
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
		if (choice.at(0) == '-')
		{
			choice.erase(0, 1);  //Removes the forward operator so only a number is left
			myStack.push(screenOutput, stoi(choice), '-');  //Pushes the previous value, the modifying value, and the modifying operator onto the stack
			screenOutput = screenOutput - stoi(choice);  //Changes the value on the screen and performs the arithmetic
		}
		if (choice.at(0) == '*')
		{
			choice.erase(0, 1);  //Removes the forward operator so only a number is left
			myStack.push(screenOutput, stoi(choice), '*');  //Pushes the previous value, the modifying value, and the modifying operator onto the stack
			screenOutput = screenOutput * stoi(choice);  //Changes the value on the screen and performs the arithmetic
		}
		if (choice.at(0) == '/')
		{
			choice.erase(0, 1);  //Removes the forward operator so only a number is left
			myStack.push(screenOutput, stoi(choice), '/');  //Pushes the previous value, the modifying value, and the modifying operator onto the stack
			screenOutput = screenOutput / stoi(choice);  //Changes the value on the screen and performs the arithmetic
		}
		if (choice.at(0) == '%')
		{
			choice.erase(0, 1);  //Removes the forward operator so only a number is left
			myStack.push(screenOutput, stoi(choice), '%');  //Pushes the previous value, the modifying value, and the modifying operator onto the stack
			screenOutput = (screenOutput % stoi(choice));  //Changes the value on the screen and performs the arithmetic
		}
		if (choice.at(0) == 'C')
		{
			choice = "";
			screenOutput = 0;
			while (myStack.isEmpty() == false)
			{
				myStack.pop();
			}
		}
		if (choice.at(0) == 'U')
		{
		
		}
		if (choice.at(0) == 'R')
		{
		
		}
		cout << "Enter a command or an Arithmatic operation followed by a number" << "\n";
		cout << "Enter + , - , * , / , %   Followed by a number to execute that operation" << "\n";
		cout << "Enter C to clear, Enter U to undo the previous operation , Enter R to redo the previous operation, Enter Q to quit";
		getline(cin, choice);
	}

return 0;
}