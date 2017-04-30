#include <cstdio>
struct {
	int num;
	int strike;
	int ball;
}typedef condition;

bool condCheck(int number, condition cond) {
	int strike=0;
	int ball = 0;
	int cent = number / 100;
	int dix = (number - 100*cent) / 10;
	int un = number % 10;

	int cCent = cond.num/ 100;
	int cDix = (cond.num- 100*cCent) / 10;
	int cUn = cond.num % 10;

	if (cCent == cent) strike++;
	else if (cCent == dix) ball++;
	else if (cCent == un) ball++;
	if (cDix == dix) strike++;
	else if (cDix == cent) ball++;
	else if (cDix == un) ball++;
	if (cUn == un) strike++;
	else if (cUn == cent) ball++;
	else if (cUn == dix) ball++;

	if (cond.strike == strike && cond.ball == ball) return true;
	else return false;
}
int main() {
	condition cond[1000];
	int n; scanf("%d", &n);
	for (int i=0; i<n; i++) {
		scanf("%d", &cond[i].num);
		scanf("%d", &cond[i].strike);
		scanf("%d", &cond[i].ball);
	}
	int cnt=0;
	for (int i=123; i<=999; i++) {	
		if (i/100 != i%10 && (i-100*(i/100)) / 10!=i/100 && (i-100*(i/100)) / 10!=i%10
			&& i/100 != 0 && i%10 !=0 && (i-100*(i/100)) / 10 !=0){
			for (int j=0; j<=n; j++) {
				if (j==n) {
					cnt++; break;// printf("%d\n", i); break;
				} 
				if (!condCheck(i, cond[j]))
					break;
			}
		}
	}
	printf("%d", cnt);
	return 0;
}