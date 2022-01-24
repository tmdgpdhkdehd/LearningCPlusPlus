#include <iostream>

int main()
{
	int a, b, coffee;
	coffee = 7000;

	printf("커피 가격은 7000원 입니다.");
	printf("가지고 있는 돈은 얼마인가요?");
	scanf("%d", &a);
	 

	if (a >= coffee)
	{
		b = a - coffee;
		printf("커피 구입 완료 \n");
		printf("거스름 돈 %d", b);
	}
	else
	{
		printf("커피를 구할 수 없음");
	}
}
