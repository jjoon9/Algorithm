#include <cstdio>

int main() {
	int T;	scanf("%d", &T);
	for (int c = 0; c < T; c++) {
		int a; scanf("%d", &a);
		int b; scanf("%d", &b);
		int LG = a*b;
		while (true) {			
			int ta = a;
			a = b;
			b = ta % b;
			if (b == 0) break;
		}
		int GCD = a;
		int LCM = LG / GCD;
		printf("%d\n", LCM);
	}
	return 0;
}