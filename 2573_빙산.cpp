#include <cstdio>
#include <cstring>


int board[300][300];
int tboard[300][300];
int n, m;
int num = 0;

void DFS(int i, int j) {
	if (tboard[i][j]==0) {
		return;
	}
	else {
		tboard[i][j] = 0;
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
	scanf("%d %d", &n, &m);
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			scanf("%d", &board[i][j]);
		}
	}
	for (int Y=1; Y<5000; Y++) {
		num=0;
		for (int i=1; i<n-1; i++) {
			for (int j=1; j<m-1; j++) {
				tboard[i][j] = board[i][j];
			}
		}
		for (int i=1; i<n-1; i++) {
			for (int j=1; j<m-1; j++) {
				if (board[i][j]>0 && board[i+1][j]<=0)
					tboard[i][j] -= 1;
				if (board[i][j]>0 && board[i-1][j]<=0)
					tboard[i][j] -= 1;
				if (board[i][j]>0 && board[i][j+1]<=0)
					tboard[i][j] -= 1;
				if (board[i][j]>0 && board[i][j-1]<=0)
					tboard[i][j] -= 1;
				if (tboard[i][j]<0)
					tboard[i][j] = 0;
			}
		}
		for (int i=1; i<n-1; i++) {
			for (int j=1; j<m-1; j++) {
				board[i][j] = tboard[i][j];
			}
		}
		for (int i=1; i<n-1; i++) {
			for (int j=1; j<m-1; j++) {
				if (tboard[i][j]>0) {
					num++;
					if (num>1) {
						printf("%d", Y); return 0;
					}
					else
						DFS(i, j);
				}
			}
		}

	}
	printf("%d", 0);
	return 0;
}