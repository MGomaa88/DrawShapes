#include "circle.h"

using namespace std;
circle::circle()
{
	int diameter=0;
	bool checkMe = true;
	while (checkMe)
	{

	cout << "Enter the diameter of the circle,"
		"The diameter should be	uneven number!! " << endl;
	cin >> diameter;
	if ((diameter % 2) != 0)
	{
		mDiameter = diameter;
		checkMe = false;

	}
	else
		cout << "Enter Uneven number!!" << endl;
	}
}

void circle::goTo(int x, int y)
{
	COORD coord;
	coord.X = x+15;
	coord.Y = y+15;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	std::cout << "*";
}
void circle::drawCircle()
{
	int origin = (mDiameter / 2) + 1;

		goTo(origin, origin);

		for (int row = 0; row < mDiameter; row++) 
		{
			for (int col = 0; col < mDiameter; col++)
			{
				if (col +1==origin && (row == 0 || row == mDiameter -1))
				{
					goTo(row, col - 2);
					goTo(row, col - 1);
					goTo(row, col);
					goTo(row, col + 1);
					goTo(row, col + 2);
					
				}

				else if (row +1 == origin && (col == 0 || col == mDiameter-1))
				{
					goTo(row -2, col );
					goTo(row -1, col );
					goTo(row, col);
					goTo(row +1, col );
					goTo(row +2, col );

				}
				else if (row == col) 
				{

					if( row % 2 != 0 && row != 5 && row != 7 && col % 2 != 0 && col != 5 && col != 7)
				{
					goTo(row , col);

				}
				}

			}
		}
		cout << endl;


}
