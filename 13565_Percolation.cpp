#include <cstdio>
#include <algorithm>

char board[1000][1001];
int m,n;

void DFS(int i, int j) {
	if (board[i][j] == '1')
		return;
	else {		
		if (i==m-1) {			
			printf("YES"); exit(1);
		}
		board[i][j] = '1';
		if(i<m-1)
			DFS(i+1, j);
		if(i>0)
			DFS(i-1, j);
		if(j<n-1)
			DFS(i, j+1);
		if(j>0)
			DFS(i, j-1);
	}
}
int main() {
	scanf("%d%d", &m, &n);
	for (int i=0; i<m; i++)  scanf("%s", board[i]);
	for (int j=0; j<n; j++) 
		if (board[0][j] == '0') 
			DFS(0, j);
	printf("NO");
	return 0;
}