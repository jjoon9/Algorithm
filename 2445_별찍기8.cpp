#include <cstdio>

void ps(int n) {
	for (int i = 0; i<n; i++) //print n *s.
		printf("*");
}
void pb(int n) {
	for (int i = 0; i<n; i++) //print n  s.
		printf(" ");
}

int main() {
	int n;	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		ps(i);
		pb(n - i);
		pb(n - i);
		ps(i);
		printf("\n");
	}
	for (int i = n - 1; i>0; i--) {
		ps(i);
		pb(n - i);
		pb(n - i);
		ps(i);
		printf("\n");
	}
	return 0;
}