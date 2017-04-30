#include <cstdio>
#include <algorithm>

int main() {
	int key[9];
	int sum = 0;
	for (int i = 0; i < 9; i++) { 
		scanf("%d", &key[i]); 
		sum += key[i];  //오예! 경기도의 딸! 키썸을구하자! 
	}
	//printf("!%d!", sum);	
	for (int i = 0; i < 8; i++)	{
		for (int j = i + 1; j < 9; j++) {
			if ((key[i] + key[j])==(sum-100)) {
				key[i] = -1;
				key[j] = -1;
				goto here;
			}
		}
	}
here:
	std::sort(key, key + 9);
	for(int i=0;i<9;i++)
		if (key[i] !=-1)
			printf("%d\n", key[i]);
	return 0;
}