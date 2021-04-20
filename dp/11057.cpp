#include <iostream>
#include <vector>
#define MOD 10007
using namespace std;

vector<vector<int>> dp(2,vector<int>(10,1)); //2개 원소 가지고 있고 각 원소는 10개인 1로 초기화됨

int main() {
	int count;
	int sum = 0;
	cin >> count;
	count--;
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 9; k >= j; k--) {
				sum = (sum + dp[i%2][k]) % MOD; // MOD로 나눈 나머지를 차례차례 더해서 합을 구했어야 함
			}
			dp[(i+1)%2][j] = sum;
			sum = 0;
		}
	}
	int result = 0;
	for (int i = 0; i < 10; i++) {
		result = (result + dp[count % 2][i]) % MOD; //나머지를 나누고 더했어야 했는데 그렇게 하지 않았음
	}
	cout << result << endl;
	return 0;
}