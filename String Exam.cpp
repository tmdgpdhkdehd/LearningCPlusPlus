#include <iostream>
#include <string.h>

#define _CRT_SECURE_NO_WARNINGS

int main()
{
	char str[10] = "abc,def";

	// 콤마 위치 찾기
	int pos = -1;
	for (int i = 0; i < 10; i++)
	{
		if (str[i] == ',')
		{
			pos = i;
			break;
		}
	}

	// 왼쪽 스트링만 읽어 저장
	if (pos >= 0)
	{
		char strLeft[10] = {0, };
		for (int i = 0; i < pos; i++)
			strLeft[i] = str[i];

		printf("%s \n", strLeft);
	}

	//printf("%s \n", s1);
}
