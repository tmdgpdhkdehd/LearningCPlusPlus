// SetMap.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <set>
#include <map>

using namespace std;

int main()
{

    /// <summary>
    /// set 사용법 
    /// </summary>
    /// <returns></returns>

    set<int> s1;

    s1.insert(1);
    s1.insert(2);
    s1.insert(3);

    set<int>::iterator it;               // iterator 에 대해선 앞 강좌에서 설명하였다.

    it = s1.find(2);

    if (it != s1.end()) {
        cout << *it << endl;        // Set의 값이 존재하면 출력.
    }
    else {
        cout << "not found !" << endl;
    }


    /// <summary>
    /// map 사용법 
    /// </summary>
    /// <returns></returns>

    map<string, int> m;

    m.insert(pair<string, int>(string("길동"), 175));
    m.insert(pair<string, int>("철수", 180));

    m["민수"] = 172;

    m.erase("철수");

    map<string, int>::iterator it1;
    for (it1 = m.begin(); it1 != m.end(); it1++)
    {
        cout << it1->first << ": " << it1->second << "cm" << endl;
    }

}
