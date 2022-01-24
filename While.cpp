#include <iostream>

int main()
{
	int a = 1;

	while (a <= 10)
	{
		a++;
		if ((a % 3) == 0)
			continue;

		printf("a = %d \n", a);
	}

	//do
	//{
	//	a++;
	//	if ((a % 3) == 0)
	//		continue;

	//	printf("a = %d \n", a);

	//} while (a <= 10);
}
