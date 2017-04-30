#include <cstdio>
#include <cmath>
using namespace std;
int main() {
	int n; scanf("%d", &n);
	int ans = 0;
	for (int i=n-54; i<=1000000; i++) {
		int temp = i;
		for (int j=0; j<=log(i); j++) {
			temp += (int)(i/pow(10, j)) % 10;
		}
		if (temp == n)
		{
			ans = i;
			break;
		}
	}
	printf("%d", ans);
	return 0;
}