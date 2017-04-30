#include <cstdio>
#include <algorithm>

int num[20], count=0;
int n, s;
void explore(int number, int sum) {
	if (sum==0) count++;
	for (int i=number+1; i<n; i++)
		explore(i, sum-num[i]);
}

int main() {
	scanf("%d%d", &n, &s);
	for (int i=0; i<n; i++) scanf("%d", &num[i]);
	for (int i=0; i<n; i++)
		explore(i, s-num[i]);
	printf("%d", count);
	return 0;
}