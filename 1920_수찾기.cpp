#include <cstdio>
#include <algorithm>

using namespace std;
int num[100001];
int binarySearch(int n) {

}
int main() {
	int n;  scanf("%d", &n);
	
	for (int i=1; i<=n; i++) scanf("%d", &num[i]);
	int m; scanf("%d", &m);
	for (int i=0; i<m; i++) {
		int test; scanf("%d", &test);
		sort(num, num+n);
		printf("%d", binarySearch(test));
	}
	return 0;
}