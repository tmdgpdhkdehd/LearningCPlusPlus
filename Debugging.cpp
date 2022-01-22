#include <iostream>
#include "function.h"

void A();
void B();

void B()
{
	printf("B입니다.\n");
	int b = 2;
	A();
}

void A()
{
	printf("A입니다.\n");
	int a = 1;
	B();
}

int main()
{
	A();
}

// F11을 누르면 한 줄씩 디버깅이 가능하다
// 디버깅 중에는 변수에 들어가는 값을 실시간으로 확인 가능
