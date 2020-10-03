//write includes statements
#include "loops.h"
#include <iostream>
//write using statements for cin and cout
using std::cout; using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	char choice;
	int value;
	while (choice == 'y')
	{
		int result;
		cout<<"Enter a positive number: ";
		cin>>value;
		
		result = display_factorial(value);

		cout<<"Factorial of that number is: \n"<<result<<;
		cout<<"Enter'y' to continue: ";
		cin>>choice;

	}

	return 0;
}