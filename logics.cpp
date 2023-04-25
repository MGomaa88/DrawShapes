#include "logics.h"
#include <iostream>

using namespace std;
logics::logics(int input)
{
	userInput = input;
}

void logics::userShape()
{
	if (userInput==1)
	{
		rectangle rec;
		rec.drawRectangle();
		
	}
	else if (userInput==2)
	{
		triangle tre;
		tre.drawTriangle();
		

	}
	else if (userInput == 3)
	{
		circle cir;
		cir.drawCircle();
	//	cout << endl;

	}
	else 
	
		std::cout << "wrong choise!!" << std::endl;
	


}
