#include <cstdio>
#include <cstring>
#include <queue>


using namespace std;
// test ? expression1 : expression2
int main() {
	queue<int> queue;
	int n; scanf("%d", &n);
	char str[20];
	for (int i = 0; i < n; i++)	{
		scanf("%s", str);
		if (!strcmp(str, "push")) {
			int temp;
			scanf("%d", &temp);
			queue.push(temp);
		}
		else if (!strcmp(str, "pop")) {
			if (queue.empty() != 1) {
				printf("%d\n", queue.front());
				queue.pop();
			}
			else
				printf("-1\n");
		}
		else if (!strcmp(str, "size")) {
			printf("%d\n",queue.size());
		}
		else if (!strcmp(str, "empty")) {
			printf("%d\n", queue.empty());
		}
		else if (!strcmp(str, "front")) {
			if (queue.empty() != 1) 
				printf("%d\n", queue.front());
			else
				printf("-1\n");
		}
		else if (!strcmp(str, "back")) {
			if (queue.empty() != 1)
				printf("%d\n", queue.back());
			else
				printf("-1\n");
		}
		
	}




	return 0;
}