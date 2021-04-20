#include <iostream>
#include <vector>
#define MOD 10007
using namespace std;

vector<vector<int>> dp(2,vector<int>(10,1)); //2�� ���� ������ �ְ� �� ���Ҵ� 10���� 1�� �ʱ�ȭ��

int main() {
	int count;
	int sum = 0;
	cin >> count;
	count--;
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 9; k >= j; k--) {
				sum = (sum + dp[i%2][k]) % MOD; // MOD�� ���� �������� �������� ���ؼ� ���� ���߾�� ��
			}
			dp[(i+1)%2][j] = sum;
			sum = 0;
		}
	}
	int result = 0;
	for (int i = 0; i < 10; i++) {
		result = (result + dp[count % 2][i]) % MOD; //�������� ������ ���߾�� �ߴµ� �׷��� ���� �ʾ���
	}
	cout << result << endl;
	return 0;
}