#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>

using namespace std;
char str[10]="";
char board[3][4]={ "","","" };
bool visit[3][3]={ false, };
bool three = false;
int o=0, x=0;
string search() {
	int res=0;
	char winner='.';
	bool wack=false;
	if (board[0][0] == board[0][1] && board[0][1] == board[0][2] 
		&& board[0][0]!='.') {
		if (winner!=board[0][0] && winner !='.') wack=true; {
			res++; winner=board[0][0]; }
	}
	if (board[1][0] == board[1][1] && board[1][1] == board[1][2] 
		&& board[1][0]!='.') {
		if (winner!=board[1][0] && winner !='.') wack=true; {
			res++; winner=board[1][0]; }
	}
	if (board[2][0] == board[2][1] && board[2][1] == board[2][2] 
		&& board[2][0]!='.') {
		if (winner!=board[2][0] && winner !='.') wack=true; {
			res++; winner=board[2][0]; }
	}
	if (board[0][0] == board[1][0] && board[1][0] == board[2][0] 
		&& board[0][0]!='.') {
		if (winner!=board[0][0] && winner !='.') wack=true; {
			res++; winner=board[0][0]; }
	}
	if (board[0][1] == board[1][1] && board[1][1] == board[2][1] 
		&& board[0][1]!='.') {
		if (winner!=board[0][1] && winner !='.') wack=true; {
			res++; winner=board[0][1]; }
	}
	if (board[0][2] == board[1][2] && board[1][2] == board[2][2] 
		&& board[0][2]!='.') {
		if (winner!=board[0][2] && winner !='.') wack=true; {
			res++; winner=board[0][2]; }
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2]
		&& board[0][0]!='.') {
		if (winner!=board[0][0] && winner !='.') wack=true; {
			res++; winner=board[0][0]; }
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0]
		&& board[0][2]!='.') {
		if (winner!=board[0][2] && winner !='.') wack=true; {
			res++; winner=board[0][2]; }
	}
	//printf("[%c]", winner);
	if (wack)
		return "invalid\n";
	else if (res==2 && x==5 && winner=='X') //2ÁÙÀÌ°í  X½Â
		return "valid\n";
	else if(res==1 && ((winner=='O' && x==o)||(winner=='X' && x==o+1))) // ÇÑÁÙ
		return "valid\n";
	else if(res==0 && x==5 && o==4 ) //¹«½ÂºÎ·Î °Á ³¡
		return "valid\n";
	else
		return "invalid\n";
	
}
int main() {
	while (true) {
		o=0; x=0; 
		scanf("%s", str);
		for (int i=0; i<10; i++) {
			switch (str[i]) {
			case 'O':
				o++;
				break;
			case 'X':
				x++;
				break;
			}
		}
		if (!strcmp(str, "end"))  break;
		for (int i=0; i<3; i++) {
			board[i][0] = str[i*3];
			board[i][1] = str[i*3+1];
			board[i][2] = str[i*3+2];
			board[i][3] = '\0';
		}
		bool three = false;
		bool sth=false;
		cout<<search();
	}
	return 0;
}
/*

#include <stdio.h>
#include <string.h>
char grid[9];
char checking2() {
	if (grid[2] != '.' && grid[2] == grid[4] && grid[4] == grid[6]) return grid[2];
	if (grid[0] != '.' && grid[0] == grid[4] && grid[4] == grid[8]) return grid[0];
	for (int i = 2; i >=0; i--)
		if (grid[0 + i] != '.' && grid[0 + i] == grid[3 + i] && grid[3 + i] == grid[6 + i]) return grid[0 + i];
	for (int i = 6; i >= 0; i -=3)
		if (grid[0 + i] != '.' && grid[0 + i] == grid[1 + i] && grid[1 + i] == grid[2 + i]) return grid[0 + i];
	return '.';
}
char checking1() {
	for (int i = 0; i < 7; i += 3)
		if (grid[0 + i] != '.' && grid[0 + i] == grid[1 + i] && grid[1 + i] == grid[2 + i]) return grid[0 + i];
	for (int i = 0; i < 3; i++)
		if (grid[0 + i] != '.' && grid[0 + i] == grid[3 + i] && grid[3 + i] == grid[6 + i]) return grid[0 + i];
	if (grid[0] != '.' && grid[0] == grid[4] && grid[4] == grid[8]) return grid[0];
	if (grid[2] != '.' && grid[2] == grid[4] && grid[4] == grid[6]) return grid[2];
	return '.';
}
int main() {
	while (1) {
		scanf("%s", grid);
		if (strcmp(grid, "end") == 0) break;
		int length = strlen(grid);
		int cnt_X = 0, cnt_O = 0, cnt_P = 0;
		for (int i = 0; i < length; i++) {
			if (grid[i] == 'X') cnt_X++;
			else if (grid[i] == 'O') cnt_O++;
			else cnt_P++;
		}
		bool check = false;
		if (cnt_X < 6 && cnt_O < 5 && (cnt_X >= 3 || cnt_O >= 3)) {
			char flag = checking1();
			if (flag == '.') check = true;
			else if (flag == 'X' && cnt_X == cnt_O + 1) {
				if (flag == checking2())
					check = true;
			}
			else if (flag == 'O' && cnt_O == cnt_X) {
				char asdf = checking2();
				if (flag == asdf)
					check = true;
			}
		}

		printf("%s\n", check == true ? "valid" : "invalid");
	}
	return 0;
}*/