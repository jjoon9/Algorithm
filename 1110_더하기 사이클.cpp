#include <cstdio>

int main() {
	int n; scanf("%d", &n);
	int count = 0;
	int num=n;
	while (true) {
		if (n != (num % 10) * 10 + (num / 10 + num % 10) % 10) {
			num = (num % 10) * 10 + (num / 10 + num % 10) % 10;
			count++;
		}
		else
			break;
	}
	printf("%d", count+1);
	return 0;
}
