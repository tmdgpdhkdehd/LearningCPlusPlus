#include <iostream>

class Player {
private:
    char* pStrName;
    int level;
    int hp;

    static int playerCount;

public:
    Player(char* strName, int lv, int HP)
    {
        pStrName = new char[20];
        strcpy(pStrName, strName);

        level = lv;
        hp = HP;

        playerCount++;
    }
    virtual ~Player()
    {
        if (pStrName)
            delete pStrName;

        playerCount--;
    }

    char* GetName() { return pStrName; };

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

    static int getPlayerCount();
};

int Player::playerCount = 0;
int Player::getPlayerCount() 
{ 
    return playerCount; 
}

int main() 
{ 
    Player* p1 = new Player((char*)"aa",1,1);
    Player* p2 = new Player((char*)"bb", 1, 1);
    Player* p3 = new Player((char*)"cc", 1, 1);
    std::cout << p1->getPlayerCount() << '\n';

    delete p2;
    delete p3;
    std::cout << p1->getPlayerCount() << '\n';

}
