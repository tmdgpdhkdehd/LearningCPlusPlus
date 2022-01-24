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
        typedef int myINT;
        
        myINT i;
        i = 10;
        
        typedef int* pMyINT;
        pMyINT pInt;
        
        int n1 = 2;
        pInt = &n1;

        printf("%d \n", *pInt);
}
