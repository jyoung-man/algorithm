#include<iostream>
using namespace std;
int dp[1001] = { 0, };

int main() {
	dp[1] = 1;
	dp[2] = 2;
	int count;
	cin >> count;
	for (int i = 3; i <= count; i++) {
		dp[i] = dp[i - 1] + dp[i - 2] % 10007;
	}
	cout << dp[count] << endl;
	return 0;
}