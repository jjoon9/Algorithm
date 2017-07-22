#include <cstdio>
int adj[100001];
int depth[100001]={ 0, };
bool visit[100001];
bool no[100001];
int prev[100001];
int cnt=0;
int d=0;
int n;
int d_;
void search(int i) {
	while (!no[i]) {	
		if (depth[i]==0 || depth[i] <=d_) { //정상방문
				visit[i] = true;
				d++;
				depth[i] = d;
				prev[adj[i]]= i;
				i = adj[i];				
		}
		else { 
			for (int j=1; j<=n; j++) {
				if (depth[j]<=d && depth[j]>=depth[i]) { // 사이클찾
					cnt++;
					no[j]=true; 
				}
				else {
					if (visit[j])
						no[j] = true;
				}
			}	
			break;
		}
	}
}
int main() {
	int T; scanf("%d", &T);
	while (T--) {
		scanf("%d", &n);
		cnt=0;
		for (int i=1; i<=n; i++) {
			adj[i] = 0;		
			depth[i] = 0;
			visit[i] = false;
			no[i] = false;
			prev[i] = 0;
		}	
		
		for (int i=1; i<=n; i++) scanf("%d", &adj[i]);
		for (int i=1; i<=n; i++) 
			if (!no[i]) {
				d_=d;
				search(i);				
			}
		printf("%d\n", n-cnt);
	}
	return 0;
}
