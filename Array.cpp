#include <iostream>

int main()
{
	int nArray[7] = { 1,2,3,4,5,6,7 };
	printf("%d \n", nArray[3]);

	int nArray2[10] = { 0 };
	printf("%d \n", nArray2[3]);

	// int nArray3[]; // error

	printf("int size %d \n", sizeof(int));
	printf("%d \n", sizeof(nArray));
	printf("%d \n", sizeof(nArray2));
}
