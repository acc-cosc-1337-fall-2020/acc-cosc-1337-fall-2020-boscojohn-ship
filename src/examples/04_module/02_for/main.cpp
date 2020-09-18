#include"for.h"
#include<iostream>

int main() 
{
	char choice;
	int value;
	while(choice == 'y' || choice == 'Y')
	{
		std::cout<<"Enter a number: ";
		std::cin>>value;

		display_numbers(value); 

		int result;

		result = sum_numbers(value);

		std::cout<<"\n RESULT "<<result;

		cout<<"\n Enter y to continue:";
		cin>>choice;
	}
	return 0;
}