#include <iostream>
#include <string.h>

#define _CRT_SECURE_NO_WARNINGS

int main()
{
	char str[8] = "hello";
	
	printf("%d \n", strlen(str));

	/// 
	char str1[8] = "hello1";
	char str2[8] = "hello";

	int ret = strcmp(str1, str2);

	/// 
	char strDest[8] = {NULL, };
	strcpy(strDest, str1);

	printf("%s \n", strDest);

	/// 
	char s1[10] = "abc";
	char s2[20] = "def";
	strcat(s1, s2);

	printf("%s \n", s1);
}
