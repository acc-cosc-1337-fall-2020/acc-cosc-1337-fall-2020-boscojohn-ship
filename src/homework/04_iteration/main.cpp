//write include statements
#include "dna.h"
#include<iostream>
#include<string>
//write using statements
using std::cout; using std::cin; using std::string;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	string stop = "Y";
	string dna;
	int user_prompt = 0;
	cout<<"Enter 1 for Get GC Content or 2 for Get DNA Complement";
	cin>>user_prompt;
	cout<<"Enter y or Y to stop, press anything else to continue";
	cin>>stop;
	while(stop != "y" || stop != "Y")
	{
		if (user_prompt = 1)
		{
			cout<<"Enter an iteration of ACTG: ";
			cin>>dna;
			get_gc_content(dna);
		}
		else if (user_prompt = 2)
		{
			cout<<"Enter an iteration of ACTG: ";
			cin>>dna;
			get_dna_complement(dna);
		}
		else
		{
			cout<<"ERROR";
		}
	}
	return 0;
}