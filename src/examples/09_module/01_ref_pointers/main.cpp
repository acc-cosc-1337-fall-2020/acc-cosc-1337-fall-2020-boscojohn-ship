#include "ref_pointers.h"
#include<iostream>
using std::cout; 

int main() 
{
	int n1 = 1, n2 =2;
	ref_ptr(int& num1,&n2);
	cout<<n1<<"\n";
	cout<<n2<<"\n";

	const int SIZE = 5;
	const int* ptr = &SIZE;

	cout<<*ptr;

	const int SIZE2 = 10;
	ptr = &SIZE2;

	cout<<*ptr<<"\n";

	int n = 5;
	ptr = &n;

	cout<<*ptr<<"\n";

	int* const ptr1 = &n; //pointer is constant assign only once/ can't be reassigned to another adress
	ptr1 = &n1;

	return 0;
}