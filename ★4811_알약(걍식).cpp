#include <cstdio>
#include <algorithm>
long long combination(int a, int b) {
	long long res=1;
	int temp = b;
	while (true) {
		res *= a;
		a--;
		temp--;
		if (temp==0) break;
	}
	while (true) {
		res /= b;
		b--;
		if (b==0) break;
	}
	return res;
}
int main() {
	while (true) {
		int n; scanf("%d", &n);
		if (n==0) break;
		printf("%lld\n", combination(2*n, n)/(n+1));
	}
	return 0;
}