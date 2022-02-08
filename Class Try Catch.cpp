#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

float devide(int a, int b) 
{ 
    if (b == 0) 
        throw b;  
    
    return (float)a / (float)b; 
}

void func() 
{ 
    float f1 = devide(2,0); 
}

int main()
{
    try {
        func();
    }
    catch (int exception)
    {
        cout << "error : " << exception << '\n';
    }

}

