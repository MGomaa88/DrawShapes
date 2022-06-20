#include "rectangle.h"
#include <iostream>

using namespace std;


rectangle::rectangle()
{
	std::cout << "Enter X1 \tY1" << endl;
	cin >> x1 >> y1;

}

void rectangle::goTo(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;

		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		std::cout << "*";

}

void rectangle::drawRectangle()
{
	// the top and bottom sides
	for (int x = x1; x <= x1 + 10; x++)
	{
		Sleep(300);
		goTo(x, y1);
		Sleep(300);
		goTo(x, y1 + 10);
	}
	// the right and left sides
		for (int y = y1; y <= y1 + 10; y++)

		{
			Sleep(300);
			goTo(x1, y);
			Sleep(300);
			goTo(x1 + 10, y);

		}

		/*
		* // solid box
		for (int x = x1; x < x2 ; x++)
		for (int y = y1; y < y2; y++)
		{
			Sleep(500);
		  goTo(x,y);
		}

		*/
	

}


