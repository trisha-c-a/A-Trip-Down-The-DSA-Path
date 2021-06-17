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

long long LCM(long long a, long long b) {
	return (long long)a * b / GCD(a, b);
}

int main() {

	long long num1, num2;
	//cout << "Enter 2 numbers: " << endl;
	cin >> num1 >> num2;
	cout<< LCM(num1, num2);
}
