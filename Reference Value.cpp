#include <iostream>

int main()
{
	int n1 = 2;
	int sum;

	int& test = n1;

	test += 10;

	printf("%d \n", n1);
}
