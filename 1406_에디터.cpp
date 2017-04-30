#include <cstdio>
#include <cstring>
#include <list>
using namespace std;
int main(){
	char str[600001]; scanf("%s", str);
	list<char> l;	
	for (int i=0; i<strlen(str); i++) 
		l.push_back(str[i]);
	list<char>::iterator it;
	it = l.end();	
	int n; scanf("%d", &n);
	for (; n--;) {
		char inst[10]; scanf("%s", inst);
		if (!strcmp(inst,"L")) {
			if (it !=l.begin())
				it--;
		}
		else if (!strcmp(inst, "D")) {
			if (it != l.end())
				it++;
		}
		else if (!strcmp(inst, "B")) {
			if (it !=l.begin()) {
				it--;
				it = l.erase(it);
			}
		}
		else if (!strcmp(inst, "P")) {
			char temp[2];	scanf("%s", temp);
			l.insert(it, temp[0]);
			
		}
		
	}
	for (it=l.begin();it!=l.end();it++) {
		printf("%c", *it);
	}
	return 0;
}