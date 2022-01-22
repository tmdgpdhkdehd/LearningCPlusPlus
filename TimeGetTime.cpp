#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>

#pragma comment(lib, "winmm.lib")

int main()
{
	float fStartTime = (float)timeGetTime();
	int cnt = 0;
	while (true)
	{
		float fCurTime = (float)timeGetTime();

		if (fCurTime - fStartTime > 1000)	// 1000 = 1초
		{
			printf("cnt : %d \n", cnt);

			cnt++;
			fStartTime = fCurTime;

			if (cnt >= 5)
			{
				printf("5보다 크거나 같아서 종료합니다.");
				break;
			}
		}
	}
}
