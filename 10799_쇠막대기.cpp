#include <cstdio>
#include <cstring>
int main() {
	char input[100001]; scanf("%s", input);
	int par=0,pieces=0;
	for (int i=0; i<strlen(input); i++) {
		switch (input[i]) {
		case '(':
			par++;
			break;
		case ')':
			if (input[i-1]=='(') {
				par--;
				pieces+=par;
			}
			else {
				pieces++;
				par--;
			}
			break;
		}
	}
	printf("%d", pieces);
	return 0;
}