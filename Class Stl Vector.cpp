#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    vector<int> v1;
    v1.reserve(7);        // 벡터 메모리 공간 8 예약 할당

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    for (vector<int>::size_type i = 0; i < v1.size(); ++i)
        cout << v1[i] << endl;

    cout << endl;

    v1.erase(v1.begin());
    for (vector<int>::size_type i = 0; i < v1.size(); ++i)
        cout << v1[i] << endl;
}

