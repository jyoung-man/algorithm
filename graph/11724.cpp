#include <iostream>
using namespace std;
int node, edge, sp, ep;
int arr[1001][1001] = { 0, };
bool visited[1001] = { false, };

void dfs(int start_point) {
	visited[start_point] = true;
	for (int i = 1; i <= node; i++) {
		if (arr[start_point][i] && !visited[i])
			dfs(i);
	}
}

int main() {
	int count = 0;
	cin >> node >> edge;
	for (int i = 0; i < edge; i++) {
		cin >> sp >> ep;
		arr[sp][ep] = 1;
		arr[ep][sp] = 1;
	}

	for (int i = 1; i <= node; i++) {
		if (!visited[i]) {
			dfs(i);
			count++;
		}
	}
	cout << count << endl;

	return 0;
}