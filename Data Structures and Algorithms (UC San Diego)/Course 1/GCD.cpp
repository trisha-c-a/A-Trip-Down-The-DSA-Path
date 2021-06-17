#include <iostream>

using namespace std;

long long GCD(long long num1, long long num2) {

	int divis = num1 >= num2 ? num1 : num2;
	int divid = num1 <= num2 ? num1 : num2;
	while (divis != 0) {
		int rem = divid % divis;
		divid = divis;
		divis = rem;
	}
	return divid;
}

int main() {
	long long a, b;
	cin >> a >> b;
	cout << GCD(a, b);
}
