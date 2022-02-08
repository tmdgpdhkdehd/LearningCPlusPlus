#include <iostream>
#include <string>

using namespace std;

class Point {
private:
	float x, y;
public:
	Point() { x = 0; y = 0; };
	Point(int x1, int y1) : x(x1), y(y1) {};

	void SetCoord(int x1, int y1) { x = x1; y = y1; }
	
	float getX() { return x; }
	float getY() { return y; }

	Point operator - (Point pt)
	{
		return Point(x - pt.x, y - pt.y);
	}

	float getSqare() { return x * x + y * y; }
};

class Distance
{
private:
	Point p1;
	Point p2;

public:
	Distance(Point pt1, Point pt2)
	{ 
		p1.SetCoord(pt1.getX(), pt1.getY());
		p2.SetCoord(pt2.getX(), pt2.getY());
	}
	 
	float calcDist()
	{
		Point ptDiff = p1 - p2;

		return sqrt(ptDiff.getSqare());
	}

	void printDist() { cout << calcDist() << endl; }
};

int main()
{
	Point pt1(10, 10);
	Point pt2(20, 20);

	Distance dist(pt1, pt2);

	cout << dist.calcDist() << endl;
}
