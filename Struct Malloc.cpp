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
    
    Player* p1 = (Player*)malloc(sizeof(Player));
    strcpy(p1->name, "hong gil dong");
    p1->level = 10;
    printf("%s \n", p1->name);
    printf("%d \n", p1->level);
        
}
