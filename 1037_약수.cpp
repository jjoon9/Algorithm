#include<cstdio>
int main(){
	int n; scanf("%d", &n);
	int min=1000000,max=1;
	for (int i = 0; i < n; i++) {
		int m;	scanf("%d", &m);
		if (max < m) max = m;
		if (min > m) min = m;
	}
	printf("%d", min*max);
	return 0;
}
