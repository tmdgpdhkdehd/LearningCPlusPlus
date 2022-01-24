#include <iostream>

int main()
{
	int a = 0;

	do
	{
		a++;
		if ((a % 3) == 0)
			continue;

		printf("a = %d \n", a);

	} while (a <= 10);

}
