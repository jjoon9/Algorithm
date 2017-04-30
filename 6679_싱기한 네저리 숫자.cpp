#include <cstdio>
int main() {
	for (int i=1000; i<=9999; i++) {
		int sum1=0, sum2=0, sum3=0;
		int temp = i;		
		while (temp>0) {
			sum1+= temp % 16;
			temp /= 16;
		}
		temp = i;
		while (temp>0) {
			sum2+= temp % 10;
			temp /= 10;
		}
		temp = i;
		while (temp>0) {
			sum3+= temp % 12;
			temp /= 12;
		}
		if (sum1==sum2 && sum2==sum3) {
			printf("%d\n", i);
		}
	}
	return 0;
}