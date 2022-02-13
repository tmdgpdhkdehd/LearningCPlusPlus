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

#define _MAX_SIZ_ 5

class fruitStore {
private:
    int   num_fruits;
    char* fruits[_MAX_SIZ_];

public:
    fruitStore();
    virtual ~fruitStore();

    bool putFruit(char* name);
    char* getFruit(int index);
    int findFruit(char* name);
};

fruitStore::fruitStore()
{
    num_fruits = 0;
    memset(fruits, NULL, _MAX_SIZ_*sizeof(char*));
}
fruitStore::~fruitStore()
{
    for (int i = 0; i < _MAX_SIZ_; i++)
        if (fruits[i] != NULL)
            delete fruits[i];
}

bool fruitStore::putFruit(char* name)
{
    int len = (int)strlen(name);
    if (len > 0)
    {
        fruits[num_fruits] = new char[(int64_t)len + 1];
        strcpy(fruits[num_fruits], name);
        num_fruits++;

        return true;
    }
    else
        return false;
}

char* fruitStore::getFruit(int index)
{
    if (index < num_fruits)
        return fruits[index];

    return NULL;
}

int fruitStore::findFruit(char* name)
{
    for (int i = 0; i < num_fruits; i++)
    {
        if (strcmp(name, fruits[i]) == 0)
            return i;
    }

    return -1;
}

int main(void) 
{
    fruitStore fs;
    fs.putFruit((char*)"apple");
    fs.putFruit((char*)"orange");
    fs.putFruit((char*)"grape");

    char* strName = fs.getFruit(1);

    int index = fs.findFruit((char*)"cherry");
    if (index == -1)
    {
        cout << "can't find fruit" << '\n';
    }
    else
        cout << "index : " << index << ", name : " << fs.getFruit(index) << '\n';
}
