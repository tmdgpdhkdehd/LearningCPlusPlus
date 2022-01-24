#include <iostream>
#include <Windows.h>

#pragma comment(lib, "winmm.lib")

int main()
{
	int *nPtr;
	int n1[3] = {21,22,23};

	nPtr = n1;

	printf("%d \n", *nPtr);

	nPtr++;
	printf("%d \n", *nPtr);

	//printf("%s \n", s1);
}
