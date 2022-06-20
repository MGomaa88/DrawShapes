// DrawShapes.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "shape.h"
#include "logics.h"
#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
int main()
{
	char answer;
	bool checkMe = true;
	while (checkMe)
	{

	int input = 0;
	std::cout << "Enter your choise!!" << endl;
	cout << setw(20)<< left<<"Rectangle"   << "(1)\n"
		<<setw(20) << left<<"Traingle"  <<"(2)\n"
		<< setw(20)<<left<<"Circle"   <<"(3)\n"<<endl;
	cin >> input;

	logics log(input);
	log.userShape();
	cout<< endl;
	cout << "End drawing !!" << endl;
	cout << "Do you wanna draw more?!\nPress (y) or (n). " << endl;
	cin >> answer;

	answer == 'n' ? checkMe = false : checkMe = true;
	system("CLS");


	}

}


