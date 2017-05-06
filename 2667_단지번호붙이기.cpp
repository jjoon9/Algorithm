#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int n;
char str[25][26]={ "" };
int num=0;
void BFS(int i, int j) {
	if (str[i][j]=='0') {
		return;
	}
	else { // 1이면
		num++;
		str[i][j] = '0';
		if(i>=1)
			BFS(i-1, j);
		if(i<n-1)
			BFS(i+1, j);
		if(j>=1)
			BFS(i, j-1);
		if(j<n-1)
			BFS(i, j+1);
	}
}
int main() {
	scanf("%d", &n);
	queue<char> q;
	vector<int> v;
	int count=0;
	for (int i=0; i<n; i++)
		scanf("%s", &str[i][0]);
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			num=0;
			if (str[i][j] != '0') {//발견
				BFS(i,j);
				//여기서 BFS실행해서 개수구하고 0으로변경				
				count++;				
				v.push_back(num);
			}



		}
	}
		
	printf("%d\n", count);
	sort(v.begin(), v.end());
	for (int n : v)    printf("%d\n", n);
	return 0;
}