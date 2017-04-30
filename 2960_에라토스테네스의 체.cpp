#include <cstdio>

int main(){
	int n; scanf("%d", &n);
	int k; scanf("%d", &k);
	int num[1001];
	for (int i=2; i<=n; i++) 
		num[i] = i;
	while (true) {
		for (int i=2; i<=n; i++) {
			if (num[i]!=-1) {
				int base = i;
				num[i] = -1;
				k--;
				//printf("[i=%d][base=%d][k=%d]\n", i, base, k);
				if (k==0) {
					printf("%d", base);
					return 0;
				}
				int gop=1;
				while(true){					
					gop++;
					int temp = base * gop;
					if (num[temp]!=-1) {
						if (temp>n)  break;
						num[temp] = -1;
						k--;
					//	printf("[i=%d][temp=%d][k=%d]\n", i, temp, k);
						if (k==0) {
							printf("%d", temp);
							return 0;
						}
					}
				}				
			}
		}
	}
	return 0;
}