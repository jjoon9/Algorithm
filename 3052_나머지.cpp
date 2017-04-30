#include <iostream>
#include <set>

int main() {
	int num[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
		num[i] = num[i] % 42;
	}
	std::set<int> s;
	for (int i = 0; i < 10; i++)
		s.insert(num[i]);
	printf("%d", s.size());
	return 0;
}
//