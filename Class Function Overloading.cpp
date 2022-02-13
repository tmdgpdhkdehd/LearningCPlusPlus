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

class calculator {

public:
    int add(int a, int b) { return a + b; }
    float add(float a, float b) { return a + b; }
};

int  main()
{
    calculator* pCalc = new calculator();
    
    std::cout << pCalc->add(1,2) << '\n';
    std::cout << pCalc->add(3.1f, 9.2f) << '\n';

    delete pCalc;
}
