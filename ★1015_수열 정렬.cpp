#include <cstdio>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
	int n; scanf("%d", &n);
	int num[50];
	for (int i=0; i<n; i++) scanf("%d", &num[i]);
	int rank[50];
	for (int i=0; i<n; i++) {
		rank[i]=0;
		for (int j=0; j<n; j++) {
			if (num[i]>num[j])
				rank[i]++;
		}
		bool temp;
		while (true) {
			temp = false;
			for (int k=0; k<n; k++) {
				if (rank[k]==rank[i]&&i!=k) {
					rank[i]++;
					temp = true;
				}
			}
			if (!temp) break;
			}		
	}
	for (int i=0; i<n; i++)
		printf("%d ", rank[i]);
	return 0;
}