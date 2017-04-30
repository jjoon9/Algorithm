#include <cstdio>

int main() {
	int n; scanf("%d", &n);
	int kg[50],cm[50];
	int order[50] = {0,};
	for (int i = 0; i < n; i++) {
		scanf("%d", &kg[i]);
		scanf("%d", &cm[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i != j) {
				if (kg[i] < kg[j] && cm[i] < cm[j]) {
					order[i]++;
				}
			}
		}
	}
	for(int i=0;i<n;i++)
		printf("%d ", order[i]+1);
	return 0;
}