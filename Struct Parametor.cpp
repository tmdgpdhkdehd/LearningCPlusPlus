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

void func(Player* p1);

int  main()
{
    
    Player* p1 = (Player*)malloc(sizeof(struct Player));
    strcpy(p1->name, "tom");
    p1->level = 30;

    func(p1);
}

void func(Player* p1)
{
    printf("%d \n", p1->level);
}
