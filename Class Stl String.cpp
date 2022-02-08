// SetMap.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <set>
#include <map>
#include <string>

using namespace std;

int main()
{
	string myString; 
	myString = "ABC";
	
	cout << myString << endl;
	cout << myString.size() << endl;
	cout << myString.at(1) << endl;

	myString.append("appended!");
	cout << myString << endl;

	string strA = "aaa";
	string strB = "aaa";
	cout << strA.compare(strB) << endl;
}
