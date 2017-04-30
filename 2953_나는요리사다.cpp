#include <cstdio>

int main() {
	int max=0,winner,temp;
	for (int n = 0; n < 5; n++) {
		int sum = 0;
		for (int i = 0; i < 4; i++) {
			scanf("%d", &temp);	sum += temp;
		}
		if (max < sum) {
			max = sum;	winner = n;
		}
	}
	printf("%d %d", winner+1, max);
	return 0;
}