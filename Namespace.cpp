#include <iostream>

namespace AAA
{ 
    int add(int x, int y) 
    { 
        return x + y; 
    } 
}

namespace BBB
{
    int add(int x, int y)
    {
        return x + y;
    }
}

namespace Foo {
    namespace Goo 
    { 
        const int n1 = 5; 
    } 
}



int  main()
{
 
    std::cout << AAA::add(4, 3) << std::endl;
    std::cout << BBB::add(1, 2) << '\n';

    std::cout << Foo::Goo::n1 << '\n';
}
