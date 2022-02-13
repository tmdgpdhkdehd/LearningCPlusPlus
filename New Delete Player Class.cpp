#include <iostream>

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
    Player *p1 = new Player();
    p1->SetLevel(20);

    std::cout << p1->GetLevel() << '\n';

    delete p1;
}
