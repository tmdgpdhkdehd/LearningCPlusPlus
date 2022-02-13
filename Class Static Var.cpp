#include <iostream>

class Player {
private:
    char *pStrName;
    int level;
    int hp;
public:
    Player(char *strName, int lv, int HP)
    {
        pStrName = new char[20];
        strcpy(pStrName, strName);

        level = lv;
        hp = HP;
    }
    virtual ~Player() 
    {
        if (pStrName)
            delete pStrName;
    }

    char* GetName() { return pStrName;  };

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

void incPrint() {
    static int v1 = 1;
    v1++; 
    std::cout << v1 << '\n'; 
} 

int main() 
{ 
    incPrint();
    incPrint();
    incPrint();
}
