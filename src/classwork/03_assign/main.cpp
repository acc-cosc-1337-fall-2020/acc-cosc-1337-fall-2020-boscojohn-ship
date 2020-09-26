//Write the include statement for decisions.h here
#include<iostream>
#include "decision.h"
//Write namespace using statements for cout and cin
using std::cout; using std::cin;
int main() 
{
	int grade;
	cout<<"Enter a number ranging from 0 - 100: ";
	cin>>grade;
	std::string get_letter_grade_using_if(int grade);
	std::string get_letter_grade_using_switch(int grade);
	return 0;
}

