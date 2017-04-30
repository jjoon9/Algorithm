#include <cstdio>
#include <cstring>

int main() {
	int n; scanf("%d", &n);
	for (;n--;) {
		char str[51]; scanf("%s", str);
		int check = 0;
		for (int j = 0; j < strlen(str); j++){
			if (str[j] == '(')
				check++;
			else if (str[j] == ')')
				check--;
			if (check < 0) {
				printf("NO\n");
				break;
			}			
		}
		if (check < 0) {
			continue;
		}
		if (check == 0)
			printf("YES\n");
		else
			printf("NO\n");

	}
	return 0;
}