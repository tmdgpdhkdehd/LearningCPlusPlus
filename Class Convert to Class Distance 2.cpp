
#include <iostream>
#include <string>

using namespace std;

class Distance
{
private:
	float x1, y1, x2, y2;
public:
	Distance(float xA, float yA, float xB, float yB)
		: x1(xA), y1(yA), x2(xB), y2(yB)
	{ 
	}

	void setCoords(float xA, float yA, float xB, float yB)
	{
		x1 = xA; y1 = yA; x2 = xB; y2 = yB;
	}
	 
	float calcDist()
	{
		float distX = x2 - x1;
		float distY = y2 - y1;
		return sqrt(distX * distX + distY * distY);
	}

	void printDist() { cout << calcDist() << endl; }
};

int main()
{
	Distance dist(10, 10, 20, 20);
	dist.printDist();

	dist.setCoords(1, 1, 2, 2);
	dist.printDist();
}
