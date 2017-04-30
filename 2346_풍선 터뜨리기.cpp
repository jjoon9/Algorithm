#include <cstdio>
#include <list>

using namespace std;
int main() {
	int n; scanf("%d", &n);
	list<pair<int, int>> li;
	for (int i=1; i<=n; i++) {
		int temp; scanf("%d", &temp);
		li.push_back(make_pair(i, temp));
	}
	auto it = li.begin();
	while (true) {
		printf("%d ", it->first);
		int step = it->second;
		it = li.erase(it);
		if (it==li.end())
			it=li.begin();
		if (li.size()==0) break;
		if (step>0) {
			for (int i=0; i<step-1; i++) {
				it++;
				if (it==li.end())
					it=li.begin();		
			}
		}
		else {
			step *= -1;
			for (int i=0; i<step; i++) {												
				if (it==li.begin())
					it=li.end();
				it--;
			}

		}
	}
}
//5
//3 2 1 -4 -1
//는 14352가 나와야함.