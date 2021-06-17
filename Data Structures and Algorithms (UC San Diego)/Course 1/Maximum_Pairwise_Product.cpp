#include <iostream>
#include <vector>

using namespace std;

void MaxProduct(vector <int> array, int len) {
	int max1 = 0;
	int max2 = 0;
	int index1 = 0;

	for (int i = 0; i < len; i++) {
		if (array[i] > max1) {
			max1 = array[i];
			index1 = i;
		}
	}
	/*cout << "First max number: " << max1 << endl;*/

	for (int j = 0; j < len; j++) {
		if (j != index1 && array[j] > max2) {
			max2 = array[j];
		}
	}
	/*cout << "Second max number: " << max2 << endl;

	cout << "Product: " << (long long)max1 * max2 << endl;*/
	cout<< (long long)max1 * max2;

}

int main() {
	int length;
	/*cout << "Enter the length of the array: " << endl;*/
	cin >> length;
	vector <int> arr(length);
	/*cout << "Enter the elements in the array: " << endl;*/
	for (int i = 0; i < length; i++) {
		cin >> arr[i];
	}
	MaxProduct(arr, length);
}