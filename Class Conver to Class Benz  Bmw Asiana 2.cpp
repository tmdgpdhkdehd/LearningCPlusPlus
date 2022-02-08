
#include <iostream>
#include <string>

using namespace std;

class _Size 
{
	// size
	int lenVert;
	int lenHoriz;
	int lenHeight;
public:
	_Size(int lenV, int lenHo, int lenHe) : lenVert(lenV), lenHoriz(lenHo), lenHeight(lenHe) {};

	void printSize() 
	{ 
		cout << lenVert << endl; 
		cout << lenHoriz << endl;
		cout << lenHeight << endl;
	}
};

class vehicle : public _Size
{
	// name
	char companyName[20];
public:
	vehicle(char* strCompanyName, int lenVert, int lenHoriz, int lenHeight):_Size(lenVert, lenHoriz, lenHeight)
	{
		strcpy(companyName, strCompanyName);
	}

	void printCompanyName()
	{
		cout << (char*)companyName << endl;
	}

};

int main()
{
	// class Size
	// class vehicle
	// 2개 사용으로 바꿈 

	vehicle benz((char*)"benz", 300, 120, 100);
	benz.printSize();
	benz.printCompanyName();
	
	vehicle bmw((char*)"bmw", 280, 125, 90);
	bmw.printSize();
	bmw.printCompanyName();

	vehicle asiana((char*)"asiana", 1500, 1200, 900);
	asiana.printSize();
	asiana.printCompanyName();
}

