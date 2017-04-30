#include <cstdio>

int main() {
	int notes[10];
	bool asc=false, desc=false;
	for (int i = 0; i < 8; i++) 
		scanf("%d", &notes[i]);
	for (int i = 1; i < 8; i++)
		if (notes[i-1]<notes[i])//asc
			asc = true;
		else if (notes[i - 1] > notes[i]) //desc
			desc = true;
	if (asc && !desc) printf("ascending");
	if (!asc && desc) printf("descending");
	if (asc && desc) printf("mixed");
	return 0;
}