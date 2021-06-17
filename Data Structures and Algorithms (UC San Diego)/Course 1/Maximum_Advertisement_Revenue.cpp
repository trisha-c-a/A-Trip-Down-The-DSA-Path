#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long MaximumRevenue(int n, vector <long long> a, vector <long long> b) {
	long long sum = 0;
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	for (int i = 0; i < n; i++) {
		sum += a[i] * b[i];
	}
	return sum;
}

int main() {
	int n;
	//cout << "Enter the number of integers: " << endl;
	cin >> n;
	vector <long long> a(n);
	vector <long long> b(n);
	//cout << "Enter the integers of the first array: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	//cout << "Enter the integers of the second array: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	cout << MaximumRevenue(n, a, b) << endl;

	/*for (int i = 0; i < n; i++) {
		cout << a[i] << ", " << b[i] << endl;
	}*/
}