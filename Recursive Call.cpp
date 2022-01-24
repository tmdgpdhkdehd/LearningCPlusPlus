#include <iostream>

void draw(int min, int max);

int main()
{
	draw(1, 5);
	//printf("결과Main : %d\n", n1);
}

void draw(int min, int max)
{
	int i = 0;

	for (i = 0; i < min; i++)
		printf("%c", '*');

	printf("\n");

	if (min < max)
		draw(min + 1, max);
}
