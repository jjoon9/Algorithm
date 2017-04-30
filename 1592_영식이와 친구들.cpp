#include <cstdio>
#include <list>

using namespace std;

int main() {
	int n, m, l; scanf("%d%d%d", &n, &m, &l);
	int count=0;
	list<pair<int, int>> li;
	for (int i=1; i<=n; i++)
		li.push_back(make_pair(i, 0));
	auto it = li.begin();
	while (true) {		
		it->second++;
		if (it->second==m) break;
		switch (it->second % 2) {
		case 1:
			for (int i=0; i<l; i++) {
				it++;
				if (it==li.end()) it = li.begin();
			}
			break;
		case 0:
			for (int i=0; i<l; i++) {				
				if (it==li.begin()) it = li.end();
				it--;
			}
			break;
		}
		count++;
	}
	printf("%d", count);
	return 0;
}