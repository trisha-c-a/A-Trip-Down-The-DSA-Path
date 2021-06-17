#include <iostream>
#include <vector>

using namespace std;

int Maximum_Salary(int n, vector <int> numbers) {
	int max = -1;
	vector <int> Salary(n);
	
}

int main() {
	int n;
	cout << "Enter the number of integers: " << endl;
	cin >> n;
	vector <int> numbers(n);
	cout << "Enter the numbers: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> numbers[i];
	}

	/*for (int i = 0; i < n; i++) {
		cout << numbers[i] << " ";
	}*/
}