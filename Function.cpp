#include <iostream>
int add(int a, int b);

int main()
{
	int a,b;
	printf("정수 입력 하세요 : \n");
	scanf("%d", &a);
	printf("정수 입력 하세요 : \n");
	scanf("%d", &b);

	int total = add(a, b);
	printf("더하기 결과 : %d\n", total);
}

int add(int a , int b)
{
	int c = a + b;
	return c;
}

