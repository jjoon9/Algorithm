#include <cstdio>
#include <algorithm>
int count=0, r, c;
void explore(int row, int column, int len) {
	if (len==1) {
		if (r==row && c==column) {			
			printf("%d", count);
			exit(0);
		}
		count++;
	}
	else {	
		if (abs(r-row)>=len/2 || abs(c-column)>=len/2)
			count += len*len/4;
		else
			explore(row, column, len/2);
		
		if (abs(r-row)>=len/2 || abs(c-len/2 -column)>=len/2)
			count += len*len/4;
		else
			explore(row, column+len/2, len/2);

		if (abs(r-row-len/2)>=len/2 || abs(c -column)>=len/2)
			count += len*len/4;
		else
			explore(row+len/2, column, len/2);

		if (abs(r-row-len/2)>=len/2 || abs(c-len/2 -column)>=len/2)
			count += len*len/4;
		else
			explore(row+len/2, column+len/2, len/2);
	}
	//탐색하지 않아도 되는 곳은 보질 말자!
}
int main() {
	int n; scanf("%d", &n);
	scanf("%d%d", &r, &c);
	explore(0, 0, (int)pow(2, n));
	return 0;
}
