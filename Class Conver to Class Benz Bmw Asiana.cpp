
#include <iostream>
#include <string>

using namespace std;


#define _SIZ_ 5 
int main()
{
	// class Size
	// class vehicle
	// 2개 사용으로 바꿈 

	// size
	int lenVert_benz;
	int lenHoriz_benz;
	int lenHeight_benz;

	// name
	char companyName_benz[20];


	// constructor
	lenVert_benz = 300;
	lenHoriz_benz = 120;
	lenHeight_benz = 100;

	strcpy(companyName_benz, "benz");

	// print lenVert
	cout << lenVert_benz << endl;
	cout << lenHoriz_benz << endl;
	cout << lenHeight_benz << endl;
	
	// print company Name
	cout << companyName_benz << endl;



	int lenVert_bmw;
	int lenHoriz_bmw;
	int lenHeight_bmw;

	char companyName_bmw[20];

	// constructor
	lenVert_bmw = 280;
	lenHoriz_bmw = 125;
	lenHeight_bmw = 90;

	strcpy(companyName_bmw, "bmw");

	// print lenVert
	cout << lenVert_bmw << endl;
	cout << lenHoriz_bmw << endl;
	cout << lenHeight_bmw << endl;

	// print company Name
	cout << companyName_bmw << endl;


	//
	int lenVert_asiana;
	int lenHoriz_asiana;
	int lenHeight_asiana;

	char companyName_asiana[20];

	// constructor
	lenVert_asiana = 2000;
	lenHoriz_asiana = 1500;
	lenHeight_asiana = 800;

	strcpy(companyName_asiana, "asiana");

	// print lenVert
	cout << lenVert_asiana << endl;
	cout << lenHoriz_asiana << endl;
	cout << lenHeight_asiana << endl;

	// print company Name
	cout << companyName_asiana << endl;

}

