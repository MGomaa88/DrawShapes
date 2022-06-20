#include <iomanip>
#include <Windows.h>

class triangle
{
public:
	triangle();
	void goTo(int x, int y);
	void drawTriangle();

private:
	int mHight, mWidth;

	int y1 ,x1;
	int x2;
	int y2;
};

