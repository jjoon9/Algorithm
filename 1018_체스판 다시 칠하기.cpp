
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
	char str[2501];
	char board1[8*8+1]="WBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBW";
	char board2[8*8+1]="BWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWB";
	int m; int n; scanf("%d%d", &n, &m);
	int W=0, B=0;//가로 m(열) 세로 n(행)	음..반댄가보다
	for (int i=0; i<n; i++)	scanf("%s", &str[i*m]);
	int a1=0, a2=0;
	int minimum=9999999;
	for (int i=0; i<n-7; i++) {
		for (int j=0; j<m-7; j++) {
			a1=0; a2=0;
			//printf("[i:%d][j:%d]\n", i, j);
			for (int k=0; k<64; k++) {
				if (str[(m*i+j)+m*(k/8)+k%8] != board1[k])
					a1++;
				if (str[(m*i+j)+m*(k/8)+k%8] != board2[k])
					a2++;
			}
			if(minimum > min(a1, a2))
				minimum = min(a1,a2);
			//printf("[min:%d]\n", min(a1,a2));
			//printf("[minimum:%d]\n", minimum);
		}
	}
	printf("%d", minimum);
	return 0;
}