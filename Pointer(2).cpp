#include <iostream>
#include <Windows.h>

#pragma comment(lib, "winmm.lib")

int main()
{
	int *nPtr;
	int n1 = 10;

	nPtr = &n1;

	int nSizPtr = sizeof(nPtr); // 8 byte

	printf("%p \n", nPtr);
	printf("%p \n", &n1);

	printf("%d \n", *nPtr);

	*nPtr = 3;

	printf("%d \n", *nPtr);
	printf("%d \n", n1);

	//printf("%s \n", s1);
}
