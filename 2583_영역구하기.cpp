#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int m, n, k;
int board[100][100];
int num=0;
int cnt=0;
void DFS(int i, int j) {
	if (board[i][j]==1) {
		return;
	}
	else { 
		cnt++;
		board[i][j] = 1;
		if (i>=1)
			DFS(i-1, j);
		if (i<n-1)
			DFS(i+1, j);
		if (j>=1)
			DFS(i, j-1);
		if (j<m-1)
			DFS(i, j+1);
	}
}

int main() {	
	memset(board, 0, sizeof(board));
	scanf("%d%d%d", &m, &n, &k);
	vector<int> ans;
	for (int i=0; i<k; i++) {
		int ax, ay, bx, by; scanf("%d%d%d%d", &ax, &ay, &bx, &by);
		for (int I=ax; I<bx; I++) 
			for (int J=ay; J<by; J++) 
				board[I][J] = 1;		
	}
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			cnt=0;
			if (board[i][j]==0) {
				num++;
				DFS(i, j);
				ans.push_back(cnt);
			}			
		}
	}
	printf("%d\n", num);
	sort(ans.begin(), ans.end());	
	for(int a : ans)	printf("%d ", a);

	return 0;
}