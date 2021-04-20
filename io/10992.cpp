#include <iostream>
using namespace std;

int main() {
	int count;
	cin >> count;

	for (int i = 0; i < count - 1; i++) {
		for (int j = i; j < count - 1; j++) {
			cout << ' ';
		}
		cout << '*';
		if (i != 0) {
			for (int k = 0; k < i * 2 - 1; k++) {
				cout << ' ';
			}
			cout << '*';
		}
		cout << endl;
	}
	for (int end = 0; end < count * 2 - 1; end++) {
		cout << '*';
	}
	cout << endl;
}