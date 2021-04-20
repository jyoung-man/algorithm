#include<iostream>
using namespace std;

int main() {
	int count;
	cin >> count;
	for (int i = 0; i<count; i++) {
		for (int j = count; j>i+1; j--) {
			cout << ' ';
		}
		for (int k = 0; k <= i; k++) {
			cout << '*';
		}
		for (int l = 1; l <= i; l++) {
			cout << '*';
		}

		cout << endl;
	}
}