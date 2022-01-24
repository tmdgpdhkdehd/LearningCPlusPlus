#include <iostream>

int main()
{
	int a;
	int b;
	int c;

	for (a = 2; a <= 9; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			c = a * b;
			printf("%d x %d = %d \n",a,b,c);
		}
	}

}
