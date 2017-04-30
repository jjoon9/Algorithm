#include <cstdio>

int main() {
	int num[45];
	int n; scanf("%d", &n);
	num[0] = 0;	num[1] = 1;
	for (int i = 2; i <= n; i++) 
		num[i] = num[i - 2] + num[i - 1];
	printf("%d", num[n]);
	return 0;
}