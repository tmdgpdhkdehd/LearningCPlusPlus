#include <iostream>


int main()
{
	int sum = 0;
	int nArray[7] = { 1,2,3,4,5,6,7 };


	for (int i = 0; i < 7; i++)
		sum += nArray[i];

	printf("%d \n", sum);
}
