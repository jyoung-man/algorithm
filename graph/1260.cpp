#include <iostream>
#include <queue>
using namespace std;

queue<int> queue_bfs;
bool dfs_visited[1001] = { false, };
int arr[1001][1001];

void dfs(int begin, int nodes) {
	int in = begin;
	dfs_visited[in] = true;
	cout << in << " ";
	for (int i = 1; i <= nodes; i++) {
		if (arr[in][i] && !dfs_visited[i]) 
			dfs(i, nodes);
	}
}

void bfs(int begin, int nodes) {
	int target;
	bool bfs_visited[1001] = { false, };
	queue_bfs.push(begin);
	bfs_visited[begin] = true;
	while (!queue_bfs.empty()) {
		target = queue_bfs.front();
		bfs_visited[target] = true;
		cout << target << " ";
		queue_bfs.pop();

		for (int i = 1; i <= nodes; i++) {
			if (arr[target][i] && !bfs_visited[i]) { //target과 연결은 되어 있지만 방문한 적은 없는 노드 찾기
				bfs_visited[i] = true;
				queue_bfs.push(i);
			}
		}
	}
}

int main() {
	int start_point, end_point;
	int node, line, begin;
	cin >> node >> line >> begin;
	for (int i = 0; i < line; i++) {
		cin >> start_point >> end_point;
		//배열 초기화
		arr[start_point][end_point] = 1;
		arr[end_point][start_point] = 1;
	}

	dfs(begin, node);
	cout << endl;
	bfs(begin, node);

	return 0;
}
