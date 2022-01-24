#include <iostream>
#include "utils.h"

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

    enum _ANIMAL_ {
        TYPE_CAT = 0, 
        TYPE_DOG,
    };

    _ANIMAL_ am = TYPE_CAT;
    switch (am) {
    case TYPE_CAT: printf("cat \n");break;
    case TYPE_DOG: printf("dog \n");break;
    }

    printf("%d \n", add(1, 2));
}
