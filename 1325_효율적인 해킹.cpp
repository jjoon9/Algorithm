#include <cstdio>
#include <queue>
#include <vector>

using namespace std;

vector<int> adj[10001];
int main() {
	int n, m; scanf("%d%d", &n, &m);
	for (int i=0; i<m; i++) {
		int a, b;  scanf("%d%d", &a, &b);
		adj[a].push_back(b);
	}
	int ans;
	int maxlen = 0;
	queue<int> q;
	for (int i=1; i<=n; i++) {
		q.push(i);
		int len = 0;
		int front;
		int tempAns;
		while (!q.empty()){
			front = q.front();
			if (adj[front].size() != 0) {
				tempAns = front;
				len++;
				for (int a : adj[front]) 
					q.push(a);				
			}
			q.pop();
		}
		if (maxlen<len) {
			maxlen = len;
			ans = tempAns;
		}
	}
	for (int a : adj[ans])
		printf("%d ", a);
	return 0;
}