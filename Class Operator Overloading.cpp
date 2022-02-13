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

using namespace std;
class Complex {
public:
    Complex(double r, double i) : re(r), im(i) {}
    Complex operator+(Complex& other);
    void Display() { cout << re << ", " << im << endl; }
private:
    double re, im;
};

// Operator overloaded using a member function
Complex Complex::operator+(Complex& other) {
    return Complex(re + other.re, im + other.im);
}

int main() 
{
    Complex* pA = new Complex(1.2, 3.4);
    Complex* pB = new Complex(5.6, 7.8);
    Complex* pC = new Complex(0.0, 0.0);

    *pC = *pA + *pB;
    pC->Display();
}
