#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;

int n, m;
char board[100][101];
int depth[100][100]={ { 0, }, };
queue< pair<int, int> > q;
void BFS(int i, int j) {
	q.push(make_pair(i, j));
	while (!q.empty()) {
		pair<int, int> f = q.front();
		if (f.first == n-1 && f.second ==m-1) {
			printf("%d", depth[n-1][m-1]+1);
			exit(1);
		}
		if (board[f.first][f.second]=='1') {
			if (f.first<n-1) {
				if (board[f.first+1][f.second]=='1') {
					q.push(make_pair(f.first+1, f.second));
					depth[f.first+1][f.second] = depth[f.first][f.second]+1;
				}
			}
			if (f.second<m-1) {
				if (board[f.first][f.second+1]=='1') {
					q.push(make_pair(f.first, f.second+1));
					depth[f.first][f.second+1] = depth[f.first][f.second]+1;
				}
			}
			if (f.first>=1) {
				if (board[f.first-1][f.second]=='1') {
					q.push(make_pair(f.first-1, f.second));
					depth[f.first-1][f.second] = depth[f.first][f.second]+1;
				}
			}
			if (f.second>=1) {
				if (board[f.first][f.second-1]=='1') {
					q.push(make_pair(f.first, f.second-1));
					depth[f.first][f.second-1] = depth[f.first][f.second]+1;
				}
			}
			board[f.first][f.second] = '0';
		}

		q.pop();

	}
}
int main() {
	scanf("%d%d", &n, &m);
	for (int i=0; i<n; i++)	 scanf("%s", board[i]);
	BFS(0, 0);
	return 0;
}

