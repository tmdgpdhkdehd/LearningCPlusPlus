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

class AA
{
public: 
    AA() { std::cout << "AA created ! Wn"; }

    void test() { std::cout << "AA test ! Wn"; }

};

class Player {
private:
    char name[20];
    int level;
    int hp;

public:
    AA m_a;

public:
    Player()
    {
        strcpy(name, "aaa");
        level = 10;
        hp = 100;
    }

    int GetLevel() { return level; }
    bool SetLevel(int newLevel);
 
    void LevelUp() { level++; }
    void IncHP(int amount) { hp += amount; }
};

bool Player::SetLevel(int newLevel)
{
    if (newLevel > 0 && newLevel <= 300)
    {
        level = newLevel;
        return true;
    }
}

int  main()
{
    Player p1;
    //p1.SetLevel(20);
    p1.m_a.test();

    //printf("%d \n", p1.GetLevel());
    //strcpy(p1.name, "abc");
}
