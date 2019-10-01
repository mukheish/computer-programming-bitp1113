// ConsoleApplication20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void star()
{
	cout << "This is lab 4" << endl;
	cout << "MUKHEISH_RAO, Do Exercise" << endl;

}
int main()
{ 
	float price = 9.90;
	int quantity, DISC = 10;
	float totalprice;
	
	cout << "quantity: ";
	cin >> quantity;
	totalprice = (price*quantity)*(100 - DISC) / 100.00;
	cout << "total price :" << totalprice;
}

