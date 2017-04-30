#include <cstdio>
#include <cstring>
#include <deque>

using namespace std;

int main() {
	deque<int> deque;
	int n; scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		char str[20];
		scanf("%s", str);
		if (!strcmp(str, "push_front")) {
			int temp; scanf("%d", &temp);
			deque.push_front(temp);
		}
		else if (!strcmp(str, "push_back")) {
			int temp; scanf("%d", &temp);
			deque.push_back(temp);
		}
		else if (!strcmp(str, "pop_front")) {
			if (deque.empty() != 1) {
				printf("%d\n", deque.front());
				deque.pop_front();
			}
			else
				printf("-1\n");
		}
		else if (!strcmp(str, "pop_back")) {
			if (!deque.empty()) {
				printf("%d\n", deque.back());
				deque.pop_back();
			}
			else
				printf("-1\n");
		}
		else if (!strcmp(str, "size")) {
			printf("%d\n", deque.size());
		}
		else if (!strcmp(str, "empty")) {
			printf("%d\n", deque.empty());
		}
		else if (!strcmp(str, "front")) {
			if (!deque.empty())
				printf("%d\n", deque.front());
			else
				printf("-1\n");
		}
		else if (!strcmp(str, "back")) {
			if (!deque.empty())
				printf("%d\n", deque.back());
			else
				printf("-1\n");

		}
	}
	return 0;
}
