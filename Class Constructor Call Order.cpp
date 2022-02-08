// Project2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <windows.h>

#pragma comment(lib, "winmm.lib") 

using namespace std;

class Car {

public:
    Car(void)
    {
        std::cout << "Car 생성자 !\n";
    };//생성자

    ~Car(void)
    {
        std::cout << "Car 소멸자 !\n";
    };//소멸자

    virtual void Move() { std::cout << "기반 클래스의 Move()" << std::endl; }

};

class Benz : public Car {

public:

    Benz(void)
    {
        std::cout << "Benz 생성자 !\n";
    };//생성자

    ~Benz(void)
    {
        std::cout << "Benz 소멸자 !\n";
    };//소멸자

    void Move() { std::cout << "Benz 클래스의 Move()" << std::endl; }
};

class BMW : public Car {

public:

    BMW(void)
    {
        std::cout << "BMW 생성자 !\n";
    };//생성자

    ~BMW(void)
    {
        std::cout << "BMW 소멸자 !\n";
    };//소멸자   

    void Move() { std::cout << "BMW 클래스의 Move()" << std::endl; }
};

int main()
{
    std::cout << "======================!\n";

    Car* pCar = NULL;

    pCar = new Car();
    pCar->Move();

    if (pCar)
    {
        delete pCar;
        pCar = NULL;
    }


    std::cout << "======================!\n";

    pCar = (Car*) new Benz();
    if (pCar)
    {
        delete pCar;
        pCar = NULL;
    }

    std::cout << "======================!\n";

    pCar = (Car*) new BMW();
    if (pCar)
    {
        delete pCar;
        pCar = NULL;
    }

    std::cout << "======================!\n";

    Benz* pBenz = new Benz();
    if (pBenz)
    {
        delete pBenz;
        pBenz = NULL;
    }

}
