#include <cstdio>

using namespace std;
int main() {
	int n; scanf("%d", &n);
	int num[50];
	int rank[50];
	for (int i=0; i<50; i++)
		rank[i] = -1;
	

	for (int i=0; i<n; i++)
		scanf("%d", &num[i]);	
	for (int i=0; i<n; i++) {
		rank[i]=0;
		for (int j=0; j<n; j++) {
			if (num[i]>num[j])
				rank[i]++;
		}		
		for (int k=0; k<n; k++) {
			if (rank[k]==rank[i]&&i!=k) {
				rank[i]++;
			}
		}		
	}
	for (int i=0; i<n; i++)
		printf("%d ", rank[i]);
	return 0;
}