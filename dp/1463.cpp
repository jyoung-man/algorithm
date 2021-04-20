#include<iostream>
#include<algorithm>
using namespace std;
int dp[1000001] = { 0, };

void count_num(int target) {
	dp[target] = dp[target - 1] + 1;
	if (target % 3 == 0) {
		dp[target] = min(dp[target], dp[target / 3] + 1);
	}
	if (target % 2 == 0) {
		dp[target] = min(dp[target], dp[target / 2] + 1);
	}
}

int main() {
	int num;
	cin >> num;
	for (int i = 2; i <= num; i++) {
		count_num(i);
	}
	cout << dp[num] << endl;

	return 0;
}
