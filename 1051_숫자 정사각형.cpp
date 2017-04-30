#include <cstdio>
#include <algorithm>
#define always while(true)

using namespace std;

char str[50][51];
int step;
bool check(int i, int j) {
	if ((str[i][j] == str[i][j+step])
		&& (str[i][j] == str[i+step][j])
		&& (str[i][j] == str[i+step][j+step]))
		return true;
	else
		return false;
		

}
int main() {
	int n, m; scanf("%d%d", &n, &m);	
	for (int i=0; i<n; i++)  scanf("%s", str[i]);
	step = min(n, m);
	while (--step>0) {
		for (int i=0; i<n-step+1; i++) {
			for (int j=0; j<m-step+1; j++) {
				if (check(i, j)) {
					//printf("[%d][%d]", i, j);
					printf("%d", (step+1)*(step+1));
					exit(0);
				}

			}
		}
	}
	printf("1");
	return 0;
}