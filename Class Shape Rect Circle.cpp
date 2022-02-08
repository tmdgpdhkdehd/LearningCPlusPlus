#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define _PI_ 3.14159f

class shape 
{
public:
	virtual float getArea() = 0;
	virtual float getBorderLength() = 0;
};

class myRectangle : public shape
{
	float vertLen;
	float horizLen;

public:
	myRectangle(int vL, int hL):vertLen(vL), horizLen(hL) {};

	float getArea() { return vertLen* horizLen; }
	float getBorderLength() { return 2 * (vertLen + horizLen); }
};

class myCircle : public shape
{
	float radius;
public:
	myCircle(int R): radius(R) {}

	float getArea() { return _PI_ *radius * radius; }
	float getBorderLength() { return 2 * _PI_ * radius; }
};

int main()
{
	shape* pShape[2];
	pShape[0] = new myRectangle(10, 10);
	pShape[1] = new myCircle(5);

	cout << "rectangle" << endl;
	cout<< pShape[0]->getArea() <<endl;
	cout<< pShape[0]->getBorderLength() <<endl;

	cout << "circle" << endl;
	cout << pShape[1]->getArea() << endl;
	cout << pShape[1]->getBorderLength() << endl;
}
