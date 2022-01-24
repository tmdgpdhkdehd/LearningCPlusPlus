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


int add(int a, int b);

int  main()
{
    int (*fp)(int, int);
    fp = add;
    printf("%d \n", fp(1, 2));
}

int add(int a, int b)
{
    return a + b;
}
