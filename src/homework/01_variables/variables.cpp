#include "variables.h"
//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write code for multiply_numbers function here
//function returns product of num1 and num2
const double tax_rate = 0.0675;
double meal_amount;

double get_sales_tax_amount(double meal_amount)
{
	double product = 0;
	product = tax_rate * meal_amount;
	return product;
}

double tip_rate;

double get_tip_amount(double meal_amount, double tip_rate)
{
	double product = 0;
	product = tip_rate * meal_amount;
	return product;
}



