#include <iostream>

void add(int n1, int n2, int& sum);

int main()
{
	int n1 = 2;
	int n2 = 3;
	int sum;

	add(n1, n2, sum);
	printf("%d \n", sum);
}

void add(int n1, int n2, int& sum)
{
	sum = n1 + n2;
}
