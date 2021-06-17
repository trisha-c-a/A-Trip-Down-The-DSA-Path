#include <iostream>
#include <vector>

using namespace std;

void MaximumNumberofPrizes(int TotalPrizes) {
	int sum = 0;
	vector <int> Prizes;
	for (int i = 1; i <= TotalPrizes; i++) {
		if (i < TotalPrizes - i) {
			Prizes.push_back(i);
			sum = sum + 1;
			TotalPrizes = TotalPrizes - i;
		}
		else {
			Prizes.push_back(TotalPrizes);
			sum = sum + 1;
			break;
		}
	}
	cout << sum << endl;
	for (int i = 0; i < Prizes.size(); i++) {
		cout << Prizes[i] << " ";
	}
}

int main() {
	int TotalPrizes;
	/*cout << "Enter the total number of prizes available: " << endl;*/
	cin >> TotalPrizes;
	MaximumNumberofPrizes(TotalPrizes);
}