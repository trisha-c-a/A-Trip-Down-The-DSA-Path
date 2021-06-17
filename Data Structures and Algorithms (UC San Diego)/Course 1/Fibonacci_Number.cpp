#include <iostream>

using namespace std;

long long Fibonacci(int range) {
	long long num1 = 1;
	long long num2 = 0;
	long long FibonacciNum = 0;
	for (int i = 0; i < range; i++) {
		FibonacciNum = num1 + num2;
		num1 = num2;
		num2 = FibonacciNum;
	}
	return FibonacciNum;
}

int main() {
	int RangeOfFib;
	/*cout << "Enter the number of Fibonacci numbers: " << endl;*/
	cin >> RangeOfFib;
	cout << Fibonacci(RangeOfFib);
}
