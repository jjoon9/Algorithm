#include <cstdio>
#include <queue>

using namespace std;
int main(){
	queue<int> q;
	int n; scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		q.push(i);
	while (true) {
		if (q.size() > 1) 
			q.pop();
		if (q.size() == 1) break;
		q.push(q.front());
		q.pop();
		
	}
	printf("%d", q.front());
	return 0;
}