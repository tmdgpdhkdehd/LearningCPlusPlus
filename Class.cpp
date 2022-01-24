#include <iostream>
#include "utils.h"

//struct Player {
//    char name[20];
//    int level;
//    int hp;
//};

//typedef struct Player {
//    char name[20];
//    int level;
//    int hp;
//} _Player;


class Player {
private:
    char name[20];
    int level;
    int hp;
public:
    int GetLevel() { return level; }
    void LevelUp() { level++; }
    void IncHP(int amount) { hp += amount; }
};

int  main()
{
    Player p1;
    strcpy(p1.name, "abc");
}
