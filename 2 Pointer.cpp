#include <iostream>
#include <Windows.h>

#pragma comment(lib, "winmm.lib")

int main()
{
	int *nPtr;
	int **nPtr2;

	int n1 = 10;

	nPtr = &n1;
	nPtr2 = &nPtr;

	printf("%d \n", **nPtr2);

	//printf("%s \n", s1);
}
