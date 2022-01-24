#include <iostream>
int add(int a, int b);
void inputProcess(int& a, int& b);

int main()
{
	int a,b;
	inputProcess(a,b);

	int total = add(a, b);
	printf("더하기 결과 : %d\n", total);
}

void inputProcess(int& a, int& b)
{
	printf("정수 입력 하세요 : \n");
	scanf("%d", &a);
	printf("정수 입력 하세요 : \n");
	scanf("%d", &b);
}

int add(int a, int b)
{
	int c = a + b;
	return c;
}
