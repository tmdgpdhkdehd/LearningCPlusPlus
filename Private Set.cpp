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
    bool SetLevel(int newLevel)
    {
        if (newLevel > 0 && newLevel <= 300)
        {
            level = newLevel;
            return true;
        }
    }
    void LevelUp() { level++; }
    void IncHP(int amount) { hp += amount; }
};

int  main()
{
    Player p1;
    p1.SetLevel(20);

    printf("%d \n", p1.GetLevel());
    //strcpy(p1.name, "abc");
}
