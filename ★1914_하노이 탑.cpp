#include <cstdio>
long long num[100]={ 1, 0,};

void hanoi(int n, int a, int b, int c) {
	if (n==1) {
		printf("%d %d\n", a, c);
	}
	else {
		hanoi(n-1, a, c, b);
		printf("%d %d\n", a, c);
		hanoi(n-1, b, a, c);
	}
}
int main() {
	
	for (int i=1; i<100; i++)
		num[i] = num[i-1]*2+1;
	int n; scanf("%d", &n);
	printf("%lld\n", num[n-1]);
	if(n<=20)
		hanoi(n, 1, 2, 3);
	return 0;
}


/*
def hanoi(n,a,b,c):
	if n==1:
		print("%d %d\n" % a % c)
	else:
		hanoi(n-1,a,c,b)
		hanoi(n-1,b,a,c)


if __name__ == "__main__":

	hanoi(n,1,2,3)
*/