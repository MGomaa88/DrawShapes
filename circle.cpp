#include "circle.h"

using namespace std;
circle::circle()
{
	int radius = 0;

	cout << "Enter the radius of the circle" << endl;
	cin >> radius;
	mRadius = radius;
	
	
}

void circle::goTo(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	std::cout << "*";
}
void circle::drawCircle()
{

	// Get the screen buffer information
	CONSOLE_SCREEN_BUFFER_INFO bufferInfo;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &bufferInfo);

	// Calculate the center point
	int centerX = bufferInfo.dwSize.X / 2;
	int centerY = bufferInfo.dwSize.Y / 2;
	

	
		for (int y = -mRadius; y <= mRadius; y++)
		{
			for (int x = -mRadius; x <= mRadius; x++)
			{
				if (x * x + y * y <= mRadius * mRadius)

					goTo(centerX + x, centerY + y);
				    Sleep(50);
			}
		}


		

}
