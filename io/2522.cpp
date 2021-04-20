#include<iostream>
using namespace std;

int main() {
	int count;
	cin >> count;
	for (int i = 1; i <= count; i++) {
		for (int j = count; j>i; j--) {
			cout << ' ';
		}
		for (int k = 1; k <= i; k++) {
			cout << '*';
		}
		cout << endl;
	}
	for (int i = count; i > 1; i--) {
		for (int j = count; j>=i; j--) {
			cout << ' ';
		}
		for (int k = 1; k < i; k++) {
			cout << '*';
		}
		cout << endl;
	}
}