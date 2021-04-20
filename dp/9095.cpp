#include<iostream>
#include<algorithm>
using namespace std;
int num[12];
int dp[12] = { 0, };

int main() {
	int count;
	cin >> count;
	dp[1] = 1; dp[2] = 2; dp[3] = 4;
	for (int i = 0; i < count; i++) {
		cin >> num[i];
		for (int j = 4; j <= num[i]; j++) {
			if (dp[j] > 0)
				continue;
			else {
				dp[j] = dp[j - 1] + dp[j - 2] + dp[j - 3];
			}
		}
	}

	for (int i = 0; i < count; i++) {
		cout << dp[num[i]] << endl;
	}

	return 0;
}