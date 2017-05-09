#include <cstdio>
#include <vector>

using namespace std;

bool visit[100001];

int main() {
	int T; scanf("%d", &T);
	int adj[100001];
	vector<int> exp;		
	while (T--) {
		int n; scanf("%d", &n);
		for (int i=1; i<=n; i++) scanf("%d", &adj[i]);
		for (int i=1; i<=n; i++) {
			int k = i;
			int cnt=0;
			bool SWITCH=false;
			while (true) {
				exp.push_back(adj[k]);
				k = adj[k];
				cnt++;
				if (i==k) { //  ΩŒ¿Ã≈¨ O
					SWITCH = true;
					break;
				}
				if (cnt>n) { // ΩŒ¿Ã≈¨ X
					SWITCH = false;
					break;
				}
			}			
			if (SWITCH) {
				while (!exp.empty()) {
					visit[exp.back()] = true;
					exp.pop_back();
				}
			}
			else {
				exp.clear();
			}
		}
		int cnt=0;
		for (int i=1;i<=n;i++) 
			if (!visit[i]) 	cnt++;
		printf("%d\n", cnt);
	}
	return 0;
}