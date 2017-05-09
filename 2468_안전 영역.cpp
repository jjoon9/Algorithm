#include <cstdio>
#include <cstring>

int board[100][100];
int origin[100][100];
int num;
int n;
void DFS(int i, int j) {
	if (board[i][j]==0) {
		return;
	}
	else {
		board[i][j] = 0;
		if (i>0)
			DFS(i-1, j);
		if (i<n-1)
			DFS(i+1, j);
		if (j>0)
			DFS(i, j-1);
		if (j<n-1)
			DFS(i, j+1);
	}
}

int main() {
	
	int max=0;
	memset(origin, 0, sizeof(origin));
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			scanf("%d", &origin[i][j]);
		}
	}
	for (int T=0; T<101; T++) {
		num=0;
		for (int i=0; i<n; i++) {
			for (int j=0; j<n; j++) {
				board[i][j] = origin[i][j] - T;
				if (board[i][j]<0)
					board[i][j]=0;
			}
		}
		for (int i=0; i<n; i++) {
			for (int j=0; j<n; j++) {
				if (board[i][j] > 0) {
					num++;
					DFS(i, j);
				}
			}
		}
		if (num>max) 	
			max = num;
	}
	printf("%d", max);
	return 0;
}