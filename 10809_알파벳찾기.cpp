#include <cstdio>
#include <cstring>
int alphabet[26];
int main() {
	memset(&alphabet, -1, sizeof(alphabet));
	char word[101]; scanf("%s", word);
	for (int i = 0; i < strlen(word); i++)  //i는 위치
		if (alphabet[word[i] - 'a'] == -1)
			alphabet[word[i] - 'a'] = i;
	for (int i = 0; i < 26; i++) {
		printf("%d", alphabet[i]);
		if (i != 25) {
			printf(" ");
		}
	}
}

//printf("%d", strlen(word));
//printf("!%d!", sizeof(word));
//sizeof는 메모리에 잡힌 전체길이(101)!
//strlen는 문자열의 길이! \0나오기 전까지 몇갠지 세는거!