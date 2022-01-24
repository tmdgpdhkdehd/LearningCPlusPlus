#include <iostream>
#include <Windows.h>

#pragma comment(lib, "winmm.lib")

int main()
{

	struct Player {
		char name[20];
		int level;
		int hp;
	};

	Player p1;

	strcpy(p1.name, "hong gil dong");
	p1.level = 30;
	p1.hp = 12000;

	printf("%s \n", p1.name);
	printf("%d \n", p1.level);
	printf("%d \n", p1.hp);


	//printf("%s \n", s1);
}
