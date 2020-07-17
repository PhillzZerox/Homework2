#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main()
{
	//************Homework 2***************
	string firstname, lastname;
	int salary, sale, percent;
	float total;
	cout << " Enter Name   : ";
	cin >> firstname >> lastname;
	cout << " Enter salary : ";
	cin >> salary;
	cout << " Enter sale   : ";
	cin >> sale;
	cout << " Enter Comission Percent : ";
	cin >> percent;

	//************output****************
	cout << " Your name = " << firstname <<" "<< lastname << endl;

	//***************สูตร****************
	total = (sale*percent/100)+salary;
	cout << " Total Revenue : " << total << " Bath " << endl;

	return(0);

	//********Chayanin chaklang SecB No.21*********
}