#include <cstdio>

int main() {
	int n; scanf("%d", &n);
	int count=0;
	for (int i=1; i<=n; i++) {
		if (i>=1 && i<=9) count++;
		if (i>=10 && i<=99) count++;
		//111부터 999까지만 보자.
		if (i>=111 && i<=999) {
			int _100 = (i / 100) % 10;
			int _10 =  (i / 10) % 10;
			int _1 =   (i / 1) % 10;
			if ((_100 - _10) == (_10-_1)) count++;
		}

	}
	printf("%d", count);
	return 0;
}