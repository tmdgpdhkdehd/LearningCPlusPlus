#include <iostream>


int  main()
{
 
    int* ptr = new int;
    *ptr = 7;

    int* ptr2 = new int{ 6 };

    std::cout << *ptr << std::endl;
    std::cout << *ptr2 << std::endl;

    delete ptr;
    ptr = NULL;

    delete ptr2;
    ptr2 = NULL;
  }
