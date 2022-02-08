
#include <iostream>
#include <string>

using namespace std;

class Size {
	int lenVert;
	int lenHoriz;
	int lenHeight;

public:
	Size(int ve, int ho, int he) : lenVert(ve), lenHoriz(ho), lenHeight(he) {};

	int getLenVert() { return lenVert; }
	int getLenHoriz() { return lenHoriz; }
	int getLenHeight() { return lenHeight; }
};

class Vehicle : public Size {
private:
	// name
	char companyName[20];

public:
	Vehicle(int ve, int ho, int he, char* str) : Size(ve,ho,he)
	{
		strcpy(companyName, str);
	}

	void printSize()
	{
		cout << getLenVert() << endl;
		cout << getLenHoriz() << endl;
		cout << getLenHeight() << endl;
	}

	void printCompnayName()
	{
		cout << companyName << endl;
	}
};


int main()
{
	Vehicle benz(300, 120, 100, (char*)"benz");
	benz.printSize();
	benz.printCompnayName();

	Vehicle bmw(280, 125, 110, (char*)"bmw");
	bmw.printSize();
	bmw.printCompnayName();

	Vehicle asiana(2000, 1500, 900, (char*)"asiana");
	asiana.printSize();
	asiana.printCompnayName();
}
