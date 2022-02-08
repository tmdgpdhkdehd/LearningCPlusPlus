#include <iostream>
#include <string>

using namespace std;

int main()
{
	// class Distance
	float x1, y1, x2, y2;
	//constructor

	//setPoints
	x1 = 10;
	y1 = 10;
	x2 = 20;
	y2 = 20;

	//calcDist()
	float distX = x2 - x1;
	float distY = y2 - y1;
	float dist = sqrt(distX * distX + distY * distY);
	
	//printDist()
	cout << dist << endl;
}
