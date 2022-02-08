
#include <iostream>
#include <string>

using namespace std;


#define _SIZ_ 5 
int main()
{
	// constructor
	float arr[_SIZ_] = { 2,3,5,1,7 };
	float sum = 0;

	// calcAvg()
	for (int i = 0; i < _SIZ_; i++)
		sum += arr[i];

	float avg = sum / (float)_SIZ_;

	// printAvg()
	cout << avg << endl;

	// findMax()
	float max = -100000000;
	for (int i = 0; i < _SIZ_; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	//
	cout << max << endl;
}

