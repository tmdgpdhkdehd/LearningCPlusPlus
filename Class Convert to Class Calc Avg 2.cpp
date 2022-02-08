#include <iostream>
#include <string>
using namespace std;

#define _SIZ_ 5

class Calculator
{
private:
	float arr[_SIZ_];

public:
	Calculator(int n1, int n2, int n3, int n4, int n5)
	{
		arr[0] = n1;
		arr[1] = n2;
		arr[2] = n3;
		arr[3] = n4;
		arr[4] = n5;
	}

	void SetNumbers(int n1, int n2, int n3, int n4, int n5)
	{
		arr[0] = n1;
		arr[1] = n2;
		arr[2] = n3;
		arr[3] = n4;
		arr[4] = n5;
	}

	float calcAvg()
	{
		float sum = 0;
		for (int i = 0; i < _SIZ_; i++)
			sum += arr[i];

		return (sum / (float)_SIZ_);
	}

	void printAvg()
	{
		cout << calcAvg() << endl;
	}

	float findMax()
	{
		float max = -100000000;
		for (int i = 0; i < _SIZ_; i++)
		{
			if (arr[i] > max)
				max = arr[i];
		}
		return max;
	}
};

int main()
{
	Calculator cal1(2, 3, 5, 1, 7);
	cal1.printAvg();
	cout << cal1.findMax() <<endl;

	cal1.SetNumbers(1, 2, 3, 9, 4);
	cal1.printAvg();
	cout << cal1.findMax() << endl;

	cal1.SetNumbers(7, 3, 1, 5, 2);
	cal1.printAvg();
	cout << cal1.findMax() << endl;

	cal1.SetNumbers(3, 5, 6, 9, 2);
	cal1.printAvg();
	cout << cal1.findMax() << endl;
}
