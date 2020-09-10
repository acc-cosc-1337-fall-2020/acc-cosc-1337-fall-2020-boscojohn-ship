//Write the include statement for types.h here
#include "types.h"
//Write include for capturing input from keyboard and displaying output to screen
#include<iostream>




int main() 
{
	int num;
	std::cin>> num;
	int result;
	multiply_numbers(num);
	result = multiply_numbers(num);
	std::cout << result;
	int num1 = 4;
	multiply_numbers(num1);
	result = multiply_numbers(num1);
	std::cout << result;
	return 0;
}

