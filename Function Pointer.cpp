#include <iostream>

//struct Player {
//    char name[20];
//    int level;
//    int hp;
//};

void test1();

typedef struct Player {
    char name[20];
    int level;
    int hp;
} _Player;



int  main()
{
    void(*fp)();
    fp = test1;
    fp();
}

void test1()
{
    printf("test1 called ! ");
}
