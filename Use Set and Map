#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

class BankAccount {
private:
	int curDeposit;
	std::vector<int> inList;
	std::vector<int> outList;

public:
	BankAccount(int initialDeposit) :
		curDeposit(initialDeposit) {}

	void moneyIN(int inMoney)
	{
		inList.push_back(inMoney);
		curDeposit += inMoney;
	}

	bool moneyOUT(int outMoney)
	{
		if (outMoney > curDeposit)
			return false;

		curDeposit -= outMoney;
		outList.push_back(outMoney);
		return true;
	}

	int getCurDeposit() { return curDeposit; }

	void printOutList()
	{
		cout << "outList: " << endl;
		for (int i = 0; i < outList.size(); i++)
			cout << outList[i] << endl;
		cout << endl;
	}

	void printInList()
	{
		cout << "inList: " << endl;
		for (int i = 0; i < inList.size(); i++)
			cout << inList[i] << endl;
		cout << endl;
	}
};

int main()
{
	BankAccount ac(1000);
	ac.moneyIN(100);
	cout << ac.getCurDeposit() << endl;

	if(ac.moneyOUT(1200))
		cout << ac.getCurDeposit() << endl;
	else
		cout << "short of money" << endl;

	if (ac.moneyOUT(500))
		cout << ac.getCurDeposit() << endl;
	else
		cout << "short of money" << endl;

	ac.printInList();
	ac.printOutList();
}
