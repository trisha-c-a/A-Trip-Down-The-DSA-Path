#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int MaximumValueByWeightIndex(int n, vector <int> values, vector <int> weights) {
	int max = 0;
	int max_index = 0;

	for (int i = 0; i < n; i++) {
		if (weights[i] != 0 && (long double) values[i]/ weights[i] > max){
			max = (long double)values[i] / weights[i];
			max_index = i;
		}
	}
	return max_index;
}

long double MaximumLoot(int n, int W, vector <int> values, vector <int> weights) {
	long double V = 0.0; 
	
	for (int i = 0; i < n; i++) {
		if (W == 0)
			return V;
		int maximum_index = MaximumValueByWeightIndex(n, values, weights);
		int a = min(W, weights[maximum_index]);
		V += a * (long double)values[maximum_index] / weights[maximum_index];
		weights[maximum_index] -=  a;
		W -= a;
	}
	return V;
}

int main() {
	int n, W;
	/*cout << "Enter the number of items and the total weight of the sack: " << endl;*/
	cin >> n >> W;
	vector <int> values(n);
	vector <int> weights(n);

	/*cout << "Enter the values and weights of each item: " << endl;*/
	for (int i = 0; i < n; i++) {
		cin >> values[i] >> weights[i];
	}
	cout << setprecision(4) << fixed;
	cout << MaximumLoot(n, W, values, weights) << endl;
}