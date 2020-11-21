#include "ref_pointers.h"
#include<iostream>
#include<memory>

using std::cout; using std::unique_ptr; using std::make_unique;

int main() 
{
	//Reference
	int num = 20, num2 = 25;
	int& num_ref = num;
	num_ref = num2;//assigning the value of num2 to num

	cout<<"Value of num: "<<num<<"\n";
	cout<<"Address of num: "<<&num<<"\n";
	cout<<"adress of num via num_ref: "<<&num_ref<<"\n";
	cout<<"Value of num via num_ref: "<<num_ref<<"\n\n";

	cout<<"Value of num2: "<<num2<<"\n";
	cout<<"Address of num2: "<<&num2<<"\n\n";

	num_ref = num2; //assigning the value of num2 to num

	cout<<"Value of num: "<<num<<"\n";
	cout<<"Value of num2: "<<num<<"\n";
	cout<<"Address of num via num_ref: "<<&num_ref<<"\n\n";

	// pointer
	int num1 = 10, num3 = 15;
	int* num_ptr = &num1;

	cout<<"Value of num1: "<<num1<<"\n";
	cout<<"Address of num1: "<<&num1<<"\n";
	cout<<"address of num via num_ptr: "<<num_ptr<<"\n";
	cout<<"Value of num via num_ptr: "<<*num_ptr<<"\n\n";

	num_ptr = &num3;//save the address of num3 to num_ptr

	cout<<"address of num3: "<<&num3<<"\n";
	cout<<"address of num3 via num_ptr: "<<num_ptr<<"\n";
	cout<<"Value of num3 via num_ptr: "<<*num_ptr<<"\n\n";

	//create dynamic memory(heap) with a pointer
	int* ptr_num1 = new int(5);
	cout<<"Value of ptr_num1 "<<*ptr_num1;

	delete ptr_num1;

	//smart pointers - unique pointers
	unique_ptr<int> up_num = make_unique<int>(100);
	cout<<"Value of smart pointer: "<<*up_num<<"\n";

	/*
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
	*/

	return 0;
}