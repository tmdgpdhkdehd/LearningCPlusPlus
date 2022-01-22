#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int* nPtr;
	int n1 = 10;

	nPtr = &n1;

	int nSizPtr = sizeof(nPtr); // 8바이트

	printf("%p \n", nPtr);
	printf("%p \n", &n1);

	printf("%d \n", *nPtr);

	*nPtr = 3;

	printf("%d \n", *nPtr);
	printf("%d \n", n1);
}
