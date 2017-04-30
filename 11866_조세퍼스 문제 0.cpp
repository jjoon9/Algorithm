#include <cstdio>
#include <list>
using namespace std;

int main() {
	list<int> li;
	int n, m; scanf("%d%d", &n, &m);
	for (int i=1; i<=n; i++)
		li.push_back(i);
	auto it=li.begin();
	printf("<");
	while (true) {
		for (int i=0; i<m-1; i++) {
			it++;
			if (it==li.end())
				it=li.begin();
		}
		printf("%d", *it);
		it = li.erase(it);
		if (it==li.end())
			it=li.begin();
		if (li.size()==0)
			break;
		else
			printf(", ");
	}
	printf(">");
	return 0;
}