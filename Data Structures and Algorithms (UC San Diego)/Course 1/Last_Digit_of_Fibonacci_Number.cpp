#include <iostream>
#include <vector>

using namespace std;

long long Fibonacci(int range) {
	vector <long long> FibonacciNum;
	FibonacciNum.push_back(0);
	FibonacciNum.push_back(1);
	for (int i = 2; i <= range; i++) {
		FibonacciNum.push_back((FibonacciNum[i - 1] + FibonacciNum[i - 2])%10);
	}
	return FibonacciNum[range];
}

int main() {
	int RangeOfFib;
	/*cout << "Enter the number of Fibonacci numbers: " << endl;*/
	cin >> RangeOfFib;
	cout << Fibonacci(RangeOfFib);
}
