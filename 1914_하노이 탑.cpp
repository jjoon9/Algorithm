#include <cstdio>

void hanoi(int n) {
	switch (n) {
	case 1:
		printf("1 3\n");
		break;
	case 2:
		printf("1 3\n");
		printf("1 2\n");
		printf("3 2\n");
		break;
	case 3:

		break;
	default:
		hanoi(n-1);
		break;
	}
}
int main() {
	int n; scanf("%d", &n);
	hanoi(n);
	return 0;
}