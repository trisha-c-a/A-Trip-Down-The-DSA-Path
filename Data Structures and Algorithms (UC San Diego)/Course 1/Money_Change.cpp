#include <iostream>

using namespace std;

long MoneyChange(long money) {
	long coins = 0;
	while (money != 0) {
		if (money >= 10) {
			money = money - 10;
			coins = coins + 1;
		}
		else if (money >= 5 && money < 10) {
			money = money - 5;
			coins = coins + 1;
		}
		else {
			money = money - 1;
			coins = coins + 1;
		}
	}
	return coins;
}

int main() {
	long money;
	/*cout << "Enter the amount of money: " << endl;*/
	cin >> money;
	cout<< MoneyChange(money);
}