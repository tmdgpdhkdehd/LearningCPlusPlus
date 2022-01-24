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

#define ADD(x,y) x+y 
#define SQUARE(x) x*x; 
#define _PI_  3.14159 

    int sum = ADD(2, 3);
    int sq = SQUARE(3);

    printf("%d , %d, %f \n", sum, sq, _PI_);
}
