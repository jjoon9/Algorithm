#include <iostream>
#include <cstdio>
#include <cstring>
int stack[10001] = { 0, };
int topNo() {
	for (int i = 0; i < 10001; i++) {
		if (stack[i] == 0) {
			return i - 1;
		}
	}
}

int size() {
	printf("%d\n", topNo() + 1);
	return topNo()+1;
}
int empty() {
	if (topNo() == -1) {
		return 1;
	}
	else {
		return 0;
	}
}
void top() {
	
	if (empty()==1) printf("-1\n");
	else printf("%d\n", stack[topNo()]);
}
void push(int x) {
	stack[topNo() + 1] = x;
}
void pop() {
	if (empty()==0) {
		printf("%d\n", stack[topNo()]);
		stack[topNo()] = 0;
	}
	else
		printf("-1\n");	
}


int main() {
	int n; scanf("%d", &n);
	for (int c = 0; c < n; c++) {
		char str[10];		
		scanf("%s", str);
		if (!strcmp(str, "push")){
			int num;
			scanf("%d", &num);
			push(num);
		}
		else if (!strcmp(str, "pop")) 
			pop();
		else if (!strcmp(str, "empty"))	
			printf("%d\n",empty());
		else if (!strcmp(str, "size"))
			size();
		else if (!strcmp(str, "top"))
			top();

	}
	return 0;
}