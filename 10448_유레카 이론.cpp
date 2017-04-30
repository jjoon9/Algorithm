#include <cstdio>

int main(){
	int t; scanf("%d", &t);
	int tri[51];
	for (int i=1; i<=50; i++) {
		tri[i]=0;
		for (int j=1; j<=i; j++) {
			tri[i] += j;
		}	
	}	
	while (t--) {
		int n; scanf("%d", &n);
		//tri배열에서 3개골라서 되는지 쭉 찾기.
		bool flag = false;
		for (int i=1; i<=50; i++) {
			for (int j=1; j<=50; j++) {
				for (int k=1; k<=50; k++) {
					if (tri[i] + tri[j] + tri[k] == n) {
						printf("1\n");
						flag = true;
						goto out;
					}
				}
			}
		}
	out:
		if (!flag) printf("0\n");
	}
	return 0;
}