#include <cstdio>
#include <algorithm>
int main() {
	int num[4]; scanf("%d%d%d%d", &num[0],&num[1],&num[2],&num[3]);
	std::sort(num,num+4);
	printf("%d", num[0] * num[2]);
	return 0;
}