#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int n; scanf("%d", &n);
	int k; scanf("%d", &k);
	int gold[1001]; int silver[1001]; int bronze[1001];
	bool checked[1001];

	for (int i = 0; i < n;i++) {
		int j;	scanf("%d", &j);
		scanf("%d", &gold[j]);
		scanf("%d", &silver[j]);
		scanf("%d", &bronze[j]);
		checked[j] = true;
	}
	int rank = 1;
	for (int i = 0; i < 1001; i++) {
		if (checked[i]) {
			if (k != i) {
				if (gold[i] > gold[k]) {
					rank++;
				}
				else if (gold[i] == gold[k]) {
					if (silver[i] > silver[k]) {
						rank++;
					}
					else if (silver[i] == silver[k]) {
						if (bronze[i] > bronze[k]) {
							rank++;
						}
					}
				}
			}
		}
	}
	printf("%d", rank);
	return 0;
}