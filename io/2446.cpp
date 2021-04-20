#include<iostream>
using namespace std;

int main() {
	int count, star;
	cin >> count;
	for (int i = count; i > 0; i--) {
		for (int j = count; j > i; j--) {
			cout << ' ';
		}
		star = i * 2 - 1;
		for (int k = 0; k < star; k++) {
			cout << '*';
		}
		cout << endl;
	}
	for (int i = 0; i < count-1; i++) {
		for (int j = count; j > i+2; j--) {
			cout << ' ';
		}
		star = i * 2 + 3;
		for (int k = 0; k < star; k++) {
			cout << '*';
		}
		cout << endl;
	}
}