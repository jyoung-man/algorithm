#include <iostream>
using namespace std;
int dp[1001] = { 0, };

int main() {
	int input;
	cin >> input;
	dp[1] = 1;
	for (int i = 2; i <= input; i++) {
		if (i % 2 == 1) { //È¦¼ö
			dp[i] = dp[i - 1] * 2 - 1 % 10007;
		}
		else { //Â¦¼ö
			dp[i] = dp[i - 1] * 2 + 1 % 10007;
		}
	} 
	cout << dp[input] << endl;

	return 0;
}