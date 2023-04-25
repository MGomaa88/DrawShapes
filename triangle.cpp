#include "triangle.h"
#include <iostream>
#include <math.h>

using namespace std;

triangle::triangle()
{
	 
	// this is a right-angled triangle
	std::cout << "Enter the hight of the triangle" << endl;
	cin >> mHight;
	 x1 = 15;
	 y1 = 15;
	 y2 = y1 + mHight;
}

//function to print * at the spesific coordinate
void triangle::goTo(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	std::cout << "*";

}

void triangle::drawTriangle()
{
	
	for (int x = x1; x < y2; ++x)
	{
		for (int y = y1; y <= x;++y )
		{
			
			Sleep(150);
		    goTo(y,x);
		
		
		    }
	     }
	cout << endl;
	

	




}








