#include <iostream>
#include <vector>

using namespace std;

int MinimumRefill(int CarDistance, int NumberofStops, vector <int> Stops) {
	int numRefills = 0;
	int currentRefill = 0;
	
	while (currentRefill <= NumberofStops) {
		int lastRefill = currentRefill;
		while (currentRefill <= NumberofStops && Stops[currentRefill + 1] - Stops[lastRefill] <= CarDistance)
		{
			currentRefill += 1;
		}
		//cout << currentRefill << endl;
		if (currentRefill == lastRefill)
		{
			return -1;
		}
		if (currentRefill <= NumberofStops)
		{
			numRefills += 1;
		}
	}
	return numRefills;
}

int main() {
	int Distance, CarDistance, NumberofStops;
	/*cout << "Enter the distance between the two cities: " << endl;*/
	cin >> Distance;
	//cout << "Enter the distance the car can travel on a full tank: " << endl;
	cin >> CarDistance;
	//cout << "Enter the number of fuel stops between the two cities: " << endl;
	cin >> NumberofStops;
	vector <int> Stops(NumberofStops+2);
	Stops[0] = 0;
	Stops[NumberofStops+1] = Distance;
	//cout << "Enter the distances of the fuel stops from the first city: " << endl;
	for (int i = 1; i < Stops.size()-1; i++) {
		cin >> Stops[i];
	}

	/*for (int i = 0; i <Stops.size(); i++) {
		cout << Stops[i] << "  ";
	}*/
	cout << MinimumRefill(CarDistance, NumberofStops, Stops) << endl;
}
