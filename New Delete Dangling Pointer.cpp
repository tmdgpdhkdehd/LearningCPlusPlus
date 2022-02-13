#include <iostream>


int  main()
{
    {
        int value = 5;
        
        int* ptr = new int;
        std::cout << ptr << '\n';

        ptr = &value;

        std::cout << ptr << '\n';
    }

    {
        int value = 5;
        
        int* ptr = new int;
        std::cout << ptr << '\n';

        delete ptr;

        ptr = &value;
        std::cout << ptr << '\n';
    }

  }
