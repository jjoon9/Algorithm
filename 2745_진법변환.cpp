#include <cstdio>
#include <cmath>
#include <cstring>
int main() {
	char n[100]; scanf("%s", n);
	int b; scanf("%d", &b);
	int num[100];
	for (int i = 0; i < strlen(n); i++) {
		if (n[i] >= '0' && n[i] <= '9')
			num[i] = n[i] - '0';
		if (n[i] >= 'A' && n[i] <= 'Z')
			num[i] = n[i] - 'A' + 10;
	}
	int sum = 0;	
	for (int i = 0; i < strlen(n); i++) {
		sum += num[i]*pow(b, (strlen(n)-i-1));
	}
	printf("%d", sum);
	return 0;
}
