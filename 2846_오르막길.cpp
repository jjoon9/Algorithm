#include <cstdio>

int main() {
	int n; scanf("%d", &n);
	int num[1000], max = 0;
	for (int i = 0; i < n; i++)   scanf("%d", &num[i]);
	bool asc = false;
	int first,height;
	for (int i = 1; i < n; i++) {
		if (!asc && num[i - 1] < num[i]) {//����
			first = num[i - 1];
			asc = true;
		}
		if ((asc && num[i - 1] >= num[i])) { //(����or����)or��
			height = num[i-1] - first;
			if (height > max) max = height;
			asc = false;
		}
		if (asc && i == n - 1) {
			height = num[i] - first;
			if (height > max) max = height;
			asc = false;
		}
	}
	printf("%d", max);
	return 0;
}