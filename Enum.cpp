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
int sub(int a, int b);

int  main()
{

    enum _ANIMAL_ {
        TYPE_CAT = 0, 
        TYPE_DOG,
    };

    _ANIMAL_ am = TYPE_CAT;
    switch (am) {
    case TYPE_CAT: printf("cat \n");break;
    case TYPE_DOG: printf("dog \n");break;
    }

}

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
