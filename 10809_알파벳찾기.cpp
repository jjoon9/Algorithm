#include <cstdio>
#include <cstring>
int alphabet[26];
int main() {
	memset(&alphabet, -1, sizeof(alphabet));
	char word[101]; scanf("%s", word);
	for (int i = 0; i < strlen(word); i++)  //i�� ��ġ
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
//sizeof�� �޸𸮿� ���� ��ü����(101)!
//strlen�� ���ڿ��� ����! \0������ ������ ��� ���°�!