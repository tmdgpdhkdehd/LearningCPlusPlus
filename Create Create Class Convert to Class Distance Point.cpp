
#include <iostream>
#include <string>

using namespace std;

class _Point 
{
	float x, y;
public:
	_Point() { x = 0, y = 0; }
	_Point(float x1, float y1):x(x1),y(y1) {}

	_Point operator - (_Point pt)
	{
		return _Point(x - pt.x, y - pt.y);
	}

	float getX() { return x; }
	float getY() { return y; }
	void setPoint(float x1, float y1) { x = x1; y = y1; }

	float getSqare() { return x * x + y * y; }
};

class Distance 
{
	_Point p1, p2;
	float dist;

public:
	Distance(_Point pt1, _Point pt2)
	{
		dist = 0;
		p1.setPoint(pt1.getX(), pt1.getY());
		p2.setPoint(pt2.getX(), pt2.getY());
	};

	void calcDist() 
	{ 
		_Point ptDiff = p1 - p2;
		dist = sqrt(ptDiff.getSqare());
	}

	float getDist() { return dist; }
};

int main()
{
	_Point pt1(10, 10);
	_Point pt2(20, 20);

	Distance dist(pt1,pt2);
	dist.calcDist();

	cout << dist.getDist() << endl;
}
