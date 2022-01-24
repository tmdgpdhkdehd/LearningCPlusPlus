#include <iostream>

int main()
{
	int a;
	printf("정수 입력 하세요 : \n");
	scanf("%d", &a);

	switch (a)
	{
	case 1:
		printf("1 입니다. \n");
		break;	
	case 2:
		printf("2 입니다.\n");
		break;
	case 3:
		printf("3 입니다.\n");
		break;

	default:
		printf("1,2,3 아닌 수 \n");
		break;
	}

	printf("맨 아래 코드 \n");
}
