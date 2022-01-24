#include <iostream>

//struct Player {
//    char name[20];
//    int level;
//    int hp;
//};

typedef struct Player {
    char name[20];
    int level;
    int hp;
} _Player;

int  main()
{
    _Player A;
    strcpy(A.name, "hong gildong");
    A.level = 10;
    A.hp = 10000;

    printf("%s\n", A.name);
    printf("%d\n", A.level);
}
