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

class NumberMgr {
private:
    int num;

public:
    int GetNumber() { return num; }
    bool IsZero() const {
        int r = GetNum();// error! 상수가 아닌 함수 호출;
        SetInt(2);// 
            
        return num == 0;
    }
    void SetInt(int v) const {
        num = v; // error! const 는 값을 바꾸면 안되는 함수
    }

};

int main(void) {

  
}
