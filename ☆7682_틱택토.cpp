#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>

using namespace std;
char str[10]="";
char board[3][4]={ "","","" };
int o=0, x=0;
string search() {
	int winO=0,winX=0;
	char winner='.';
	// ¶óÀÎ Ã£¾Æº½
	if (board[0][0] == board[0][1] && board[0][1] == board[0][2] 
		&& board[0][0]!='.') {
			winner=board[0][0]; 
			winner=='X' ? winX++ : winO++;		
	}
	if (board[1][0] == board[1][1] && board[1][1] == board[1][2] 
		&& board[1][0]!='.') {
			winner=board[1][0];
			winner=='X' ? winX++ : winO++;
	}
	if (board[2][0] == board[2][1] && board[2][1] == board[2][2] 
		&& board[2][0]!='.') {		
			winner=board[2][0];
			winner=='X' ? winX++ : winO++;
	}
	if (board[0][0] == board[1][0] && board[1][0] == board[2][0] 
		&& board[0][0]!='.') {
			winner=board[0][0];
			winner=='X' ? winX++ : winO++;
	}
	if (board[0][1] == board[1][1] && board[1][1] == board[2][1] 
		&& board[0][1]!='.') {
			winner=board[0][1];
			winner=='X' ? winX++ : winO++;
	}
	if (board[0][2] == board[1][2] && board[1][2] == board[2][2] 
		&& board[0][2]!='.') {		
			winner=board[0][2];
			winner=='X' ? winX++ : winO++;
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2]
		&& board[0][0]!='.') {	
			winner=board[0][0];
			winner=='X' ? winX++ : winO++;
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0]
		&& board[0][2]!='.') {		
			winner=board[0][2];
			winner=='X' ? winX++ : winO++;
	}


	if (winX==2 && x==5 && o==4 && winO==0 && winner=='X') //2ÁÙÀÌ°í  X½Â
		return "valid\n";
	else if((winX==1 && winO==0||winO==1 && winX==0) && ((winner=='O' && x==o)||(winner=='X' && x==o+1))) // ÇÑÁÙ
		return "valid\n";
	else if(winX==0 && winO==0 && x==5 && o==4 ) //¹«½ÂºÎ·Î °Á ³¡
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
		cout<<search();
	}
	return 0;
}