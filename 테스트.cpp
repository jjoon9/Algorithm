#include <cstdio>
#include <list>

using namespace std;
int main() {
	list<int> li;
	li.push_back(1);
	li.push_back(2);
	li.push_back(3);
	li.push_back(4);
	li.push_back(5);
	list<int>::iterator it;
	it = li.end();
	it--;
	printf("%d", *it);
	li.push_front(0);
	it = li.begin();
	printf("%d", *it);


}