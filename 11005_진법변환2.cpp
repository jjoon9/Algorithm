#include <cstdio>
#include <cstring>

int main() {
	int n; scanf("%d", &n);
	int b; scanf("%d", &b);
	int res[40];
	memset(res, -1, sizeof(res));
	char res2[40] = "";
	int ii = 0;
	while (n>0) {
		res[ii] = n%b;
		n /= b;
		ii++;
	}
	int len;
	for (int i = 0; i < 40; i++) {
		if (res[i] >= 0 && res[i] <= 9)
			res2[i] = res[i] + '0';
		else if (res[i] >= 10 && res[i] <= 35)
			res2[i] = res[i] + 'A' - 10;
		else {
			len = i; break;
		}
	}
	for (int i = len - 1; i >= 0; i--) {
		printf("%c", res2[i]);
	}
	return 0;
}
