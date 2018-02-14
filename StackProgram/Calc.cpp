/*
 * Calc.cpp
 * 
 */
#include <iostream>
#include <sstream>
#include <string>
#include "Stack.h"
using namespace std;
int main()
{
	//The possible commands will be +, -, *, /, %, C, U, R and Q
	string choice; //user command/arithmetic operation string
	Stack myStack;   //main stack
	Stack undoStack; //stack for storing undo/redo
	char tempc; //temporary command
	int screenOutput = 0;  //used for current screen output
	
	//user interface
	cout << "Enter a command or an Arithmetic operation followed by a number\n"
		"Enter + , - , * , / , %   Followed by a number to execute that operation\n"
		"Enter C to clear\n"
		"Enter U to undo the previous operation\n"
		"Enter R to redo the previous operation\n"
		"Enter Q to quit\n\n"
		"e.g. +300 will add 300\n"
		"------------------------------------------\n";
	myStack.displayTop(); //show 0 for empty stack
	cout << ">";  //make the initial prompt symbol for user	
	
	getline(cin, choice);
	choice.append(" ");	
		
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
			screenOutput = 0;
			myStack.push(0, 0, 'C');
			cout << screenOutput << endl;  //display the new value
			cout << ">";  //user prompt
		}
		else if (choice.at(0) == 'U')
		{	//check if stack is empty
			if ( myStack.isEmpty() ) {
			  cout << "No operations to undo\n";			  
	  		//push copy of top of myStack to undoStack
			} else {	  
			  undoStack.push(myStack.getx(), myStack.gety(), myStack.getc());
			  myStack.pop();  //pop value off of myStack			 
			//new value should be myStack.getx (symbol) myStack.gety
			  tempc = myStack.getc();
			  switch(tempc)
			  {
			  case '+':
			    screenOutput = myStack.getx() + myStack.gety();
			    break;
			  case '-':
			    screenOutput = myStack.getx() - myStack.gety();
			    break;
			  case '*':
			    screenOutput = myStack.getx() * myStack.gety();
			    break;
			  case '/':
			    screenOutput = myStack.getx() / myStack.gety();
			    break;
			  case '%':
			    screenOutput = myStack.getx() % myStack.gety();
			    break;
			  default:
			    break;
			  }			  
			}
			//output current value, prompt user for input
			cout << screenOutput << endl;
			cout << ">";  //user prompt
			
		}
		else if (choice.at(0) == 'R')		  
		{			
			if ( undoStack.isEmpty() ) {
			  cout << "No operations to redo\n";			  
	  		//push copy of top of undoStack to myStack
			} else {			   
			  myStack.push(undoStack.getx(), undoStack.gety(), undoStack.getc());			
			  undoStack.pop(); //pop value off of undoStack			  
			  //new value should be myStack.getx (symbol) myStack.gety
			  tempc = myStack.getc();
			  switch(tempc)
			  {
			  case '+':
			    screenOutput = myStack.getx() + myStack.gety();
			    break;
			  case '-':
			    screenOutput = myStack.getx() - myStack.gety();
			    break;
			  case '*':
			    screenOutput = myStack.getx() * myStack.gety();
			    break;
			  case '/':
			    screenOutput = myStack.getx() / myStack.gety();
			    break;
			  case '%':
			    screenOutput = myStack.getx() % myStack.gety();
			    break;
			  default:
			    cout << "No operations to redo\n";
			    break;
			  }			  
			}			
			cout << screenOutput << endl;
			cout << ">";  //user prompt
		}
		else if (choice.at(0) == 'Q')
		{
			break;
		}		
		else
		{
			cout << "That command was not recognized, try again\n";
			cout << screenOutput << endl;
			cout << ">"; //user prompt
			
		}		
		
		getline(cin, choice);	
		choice.append(" ");
	}
	
	
return 0;
}
