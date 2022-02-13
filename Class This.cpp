#include <iostream>

using namespace std;

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

int Player::playerCount = 0; // static 초기화 반드시 .. 
int Player::getPlayerCount() 
{ 
    return playerCount; 
}

class ABC {
    int num;
public:
    void print_this_address() {
        cout << "ABC this 주소 : " << this << endl;
    }

    ABC* getThis() { return this; }

};

int main(void) {

    ABC a;
    cout << "a의 주소값 : " << &a << endl;
    a.print_this_address();

    a.getThis()->print_this_address();

    return 0;
}
