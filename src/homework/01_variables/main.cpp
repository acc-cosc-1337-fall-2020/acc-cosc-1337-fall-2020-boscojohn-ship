//write include statements
#include "variables.h"

//write namespace using statement for cout
#include <iostream>

using std::cout; using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount = 0;
	double tip_rate = 0.0;
	double tip_amount;
	double tax_amount;
	double total = 0;

	cout<<"Enter meal amount: ";
	cin>>meal_amount;
	get_sales_tax_amount(meal_amount);

	tax_amount = get_sales_tax_amount(meal_amount);
	cout<<"\n Enter tip rate (Enter percentage as decimal): ";
	cin>>tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = tip_amount + tax_amount + meal_amount;

	cout<<"\n Meal Amount: "<<meal_amount;
	cout<<"\n Sales Tax: "<<tax_amount;
	cout<<"\n Tip amount: "<<tip_amount;
	cout<<"\n Total: "<<total;

	return 0;
}

