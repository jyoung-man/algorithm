	#include <iostream>
	#include <algorithm>
	#define MAX 10001
	using namespace std;

	int K, N; //이미 가지고 있는 K개의 랜선으로 N개의 랜선을 만들어야 함
	long long lan_cable[MAX];

	bool check_range(int target) {
		int count = 0;
		for (int i = 0; i < K; i++) {
			count += lan_cable[i] / target; //len 길이로 자를 수 있는 개수를 모두 합함
		}
	
		if (count >= N)
			return true; //개수가 N보다 크거나 같은 경우 true 반환
		return false;
	}

	int main() {
		long long high = 0; //탐색 범위 중 가장 큰 값
		long long low = 1; //탐색 범위 중 가장 작은 값
		long long mid, result;
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		cin >> K >> N;

		for (int i = 0; i < K; i++) {
			cin >> lan_cable[i]; //현재 가진 랜선들의 길이 입력
			high = max(high, lan_cable[i]); //현재 랜선 중 가장 긴 선을 최대값으로
		}
		result = 0; //계산된 길이를 저장하는 변수 0으로 초기화
		while (low <= high) {
			mid = (high + low) / 2; //가운데 값부터 탐색
			if (check_range(mid)) { //가능한 길이면 이 범위 탐색
				if (result < mid)
					result = mid;  //현재 result에 저장된 값보다 길게 자를 수 있으면 result 값 변경
				low = mid + 1; //탐색 범위 조정
			}
			else {
				high = mid - 1; //탐색 범위 조정
			}
		}
		cout << result << endl;
		return 0;
	}
