#include<iostream>
using namespace std;

int main() {
	int count, temp, max, min;
	cin >> count;
	cin >> temp;
	max = temp;
	min = temp;
	for (int i = 1; i < count; i++) {
		cin >> temp;
		if (temp > max)
			max = temp;
		if (temp < min)
			min = temp;
	}
	cout << min << " " << max << endl;
	return 0;
}