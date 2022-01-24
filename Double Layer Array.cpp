#include <iostream>


int main()
{
	int nArray[3][4] = { 
		{ 1,2,3,4 },
		{ 1,2,3,4 },
		{ 1,2,3,4 }
	};

	int nArray2[3][4] = {
		0,
	};

	printf("%d \n", nArray[1][2]);
	printf("%d \n", nArray2[1][2]);

	int memSize = sizeof(nArray);
	memset(nArray, 0, sizeof(int));

	printf("%d \n", nArray[1][2]);
}
