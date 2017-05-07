#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

struct {
	int num;
	vector<int> adj;
}typedef Node;
using namespace std;
vector<Node> ans;
vector<Node> tempAns;
//vector<int> adj[20];
int main() {
	int n, m; scanf("%d%d", &n, &m);
	int maxlen=0;
	vector<Node> v;
	queue<Node> q;
	Node nz;	v.push_back(nz);	
	for(int i=1;i<=n;i++) {
		Node node;
		node.num = i;
		v.push_back(node);
	}
	for(int i=0;i<m;i++){		
		int a, b; 	scanf("%d %d", &a, &b);
		v[a].adj.push_back(b);		
	}
	for (int i=1; i<=n; i++) {
		
		int len = 0;
		q.push(v[i]);
		while (!q.empty()) {			
			Node f = q.front();
			if (f.adj.size() > 0) {
				len++;
				vector<Node> init;
				tempAns = init;
				for (int a : f.adj) {
					q.push(v[a]);
					tempAns.push_back(v[a]);
					len--;
				}
			}			
			len++;
			q.pop();
		}
		if (maxlen<len) {
			maxlen = len;
			ans = tempAns;
		}
	}
	for(Node n : ans)
		printf("%d ", n.num);
	return 0;
}