#include<iostream>
using namespace std;

int main() {
	int count;
	cin >> count;
	for (int i = count - 1; i >= 0; i--) {
		for (int j = count; j > i; j--) {
			cout << '*';
		}
		for (int k = i * 2; k>0; k--) {
			cout << ' ';
		}
		for (int j = count; j > i; j--) {
			cout << '*';
		}
		cout << endl;
	}

	for (int i = 0; i < count-1; i++) {
		for (int j = count-1; j > i; j--) {
			cout << '*';
		}
		for (int k = i * 2; k>=-1; k--) {
			cout << ' ';
		}
		for (int j = count-1; j > i; j--) {
			cout << '*';
		}
		cout << endl;
	}
	return 0;
}