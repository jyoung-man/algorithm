#include <iostream>
using namespace std;

int main() {
	int count;
	cin >> count;
	for(int row = 0; row < count; row++) {
		for (int blank = count - 1; blank > row; blank--) {
			cout << ' ';
		}
		cout << '*';
		for(int col = 0; col < row; col++) {
			cout << " *";
		}
	cout << endl;
	}
}
