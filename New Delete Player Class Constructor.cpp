#include <iostream>

class Player {
private:
    char name[20];
    int level;
    int hp;
public:
    Player(char *strName, int lv, int HP)
    {
        strcpy(name, strName);
        level = lv;
        hp = HP;
    }
    char* GetName() { return name;  };

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
    Player *p1 = new Player((char*)"gildong", 10, 100);

    std::cout << p1->GetName() << '\n';

    delete p1;
}
