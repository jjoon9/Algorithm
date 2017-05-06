#include <cstdio>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>
using namespace std;
int n, m, v;

class Node{
public:
	int num;
	vector<int> adjacents;
	bool visit=false;
	void addAdj(int n) {
		adjacents.push_back(n);
	}
	Node(int n) {
		num = n;
	}
	void sortAsc() {
		std::sort(adjacents.begin(), adjacents.end());
	}
	void sortDesc() {
		std::sort(adjacents.begin(), adjacents.end(),greater<int>());
	}
};
void BFS(vector<Node> nodes) {
	for (int i=0; i<n; i++)
		nodes[i].sortAsc();
	queue<Node> q;
	q.push(nodes[v]);
	while (!q.empty()) {		
		printf("%d ", q.front().num);	
		nodes[q.front().num].visit = true;
		for (int aNum : nodes[q.front().num].adjacents)
			if (!nodes[aNum].visit) {
				q.push(nodes[aNum]);
				nodes[aNum].visit = true;
			}
		q.pop();
	}
	
}
void DFS(vector<Node> nodes) {
	for(int i=0; i<n ;i++)
		nodes[i].sortAsc();
	stack<Node> stack;
	stack.push(nodes[v]);
	printf("%d ", nodes[v].num);
	nodes[v].visit = true;
	while (!stack.empty()) {
		bool flag = false;		
		for (int aNum : nodes[stack.top().num].adjacents) {
			if (!nodes[aNum].visit) {
				stack.push(nodes[aNum]);
				printf("%d ", nodes[aNum].num);
				nodes[aNum].visit = true;
				flag = true;
				break;
			}
		}
		if (!flag)
			stack.pop();

	}
}
int main() {
	scanf("%d%d%d", &n,&m,&v);		
	vector<Node> nodes;
	nodes.push_back(Node(0));
	for (int i=1; i<=n; i++)
		nodes.push_back(Node(i));	
	for (int i=0; i<m; i++) {
		int a, b;	scanf("%d %d", &a, &b);
		nodes[a].addAdj(b);
		nodes[b].addAdj(a);
	}
	DFS(nodes);	printf("\n");
	BFS(nodes);

	return 0;
}