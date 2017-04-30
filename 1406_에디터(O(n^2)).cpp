#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

int main() {
	char strt[600001]; scanf("%s", strt);
	string str(strt);
	int cursor = str.length();
	int n;  scanf("%d", &n);
	string temp;
	for (; n--;) {
		temp = "";
		string inst; cin >> inst;		
		if (inst.compare("L")==0) {
			if (cursor > 0) cursor--;
		}
		if (inst.compare("D")==0) {
			if (cursor < str.length()) cursor++;
		}
		if (inst.compare("B") == 0) {
			temp.append(str.substr(0, cursor - 1));
			temp.append(str.substr(cursor, str.length() - cursor));
			if (cursor > 0) cursor--;
			str = temp;
		}
		
		if (inst.compare("P")==0) {
			string ch; cin >> ch;
			temp.append(str.substr(0, cursor));
			temp.append(ch);
			temp.append(str.substr(cursor, str.length()-cursor));
			 cursor++;
			str = temp;
		}
	}
	cout << str;
	return 0;

}