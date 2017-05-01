#include <cstdio>

long long board[31][31]; //За,ї­
int main() {
	for (int i=0; i<31; i++) 
		for(int j=0; j<31; j++)
			board[i][j] = 0;
	for (int i=0; i<31; i++)
		board[i][0] = 1;
	for (int i=30; i>=0; i--) {
		for (int j=1; j<31; j++) {
			if (j<=30-i) {
				board[i][j] = board[i+1][j] + board[i][j-1];
			}
		}
	}
	while (true) {
		int n; scanf("%d", &n);
		if (n==0) break;
		printf("%lld\n", board[30-n][n]);
		
	}
	return 0;
}