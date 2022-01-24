#include <iostream>

int main()
{
	char ch;
	printf("character 입력하세요: ");
	ch = getchar();
	printf("%c \n", ch);

	char str[10];
	printf("문자열을 입력하세요: ");
	
	scanf("%s", str);
	printf("%s \n", str);

	int num1;
	printf("정수를 입력하세요: ");
	scanf("%d", &num1);
	printf("%d \n", num1);

}

