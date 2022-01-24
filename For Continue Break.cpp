#include <iostream>

int main()
{
	int a;

	for (a = 1; a <= 10; a++)
	{
		if (a % 3 == 0)
			continue;

		//if (a > 2)
		//	break;

		printf("a = %d \n", a);
	}

}
