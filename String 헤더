#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

int main()
{
	char str[8] = "hello";

	printf("%d \n", strlen(str));		// str의 문자길이

	char str1[8] = "hello1";
	char str2[8] = "hello";

	int ret = strcmp(str1, str2);	// str1이 str2보다 크면 양수, 아니면 음수

	printf("%d \n", ret);

	char strDest[8] = { NULL, };
	strcpy(strDest, str1);		// str1을 strDest에 복사

	printf("%s \n", strDest);

	char s1[10] = "abc";
	char s2[10] = "def";
	strcat(s1, s2);		// s1과 s2 붙이기

	printf("%s \n", s1);
}
