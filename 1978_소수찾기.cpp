#include <cstdio>
bool isPrime(int n) {
	//2부터자기까지 나눠지는수가없으면 소수
	if (n == 1) 
		return false;
	if (n == 2) 
		return true;
	bool flag=true;
	for (int i = 2; i < n; i++) {
		if (n%i == 0) {
			flag = false;
			break;
		}
	}
	return flag;	
}

int main() {
	int n; scanf("%d", &n);
	int num[100],count=0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
		if (isPrime(num[i])) count++;		
	}
	printf("%d", count);
	return 0;
}