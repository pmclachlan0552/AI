//============================================================================
// Name        : Snake.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include<ctime>
#include<cstdlib>

using namespace std;
int board[5][5]{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

string FOOD[2][3]{
	" "," "," ",
	"*","*","*"
};
string row = "--- --- --- --- ---";
string wall = "||";
string ceiling = "##===================##";
string inwall = "|";
string space = "   ";
string MrSnake = "!";


void db(){
	cout << ceiling << endl;
	for(int t = 0 ; t < 5 ; t++){
		for(int c = 0 ; c < 5 ; c++){
			if(c == 0){cout << wall;}
			cout << space;
			if(c != 4){cout << inwall;}
			if(c == 4){cout << wall;}
		}
		if(t != 4){cout<< endl << wall <<row << wall << endl;
		}
	}
	cout << endl << ceiling;
}

void foodplacer(){
	int v;

	srand(time(NULL));
	int s = rand()%24;
	switch(s){
	case 0: board[0][0] = 1; v = board[0][0]; break;
	case 1: board[0][1] = 1; v = board[0][1]; break;
	case 2: board[0][2] = 1; v = board[0][2]; break;
	case 3: board[0][3] = 1; v = board[0][3]; break;
	case 4: board[0][4] = 1; v = board[0][4]; break;
	case 5: board[1][0] = 1; v = board[1][0]; break;
	case 6: board[1][1] = 1; v = board[1][1]; break;
	case 7: board[1][2] = 1; v = board[1][2]; break;
	case 8: board[1][3] = 1; v = board[1][3]; break;
	case 9: board[1][4] = 1; v = board[1][4]; break;
	case 10: board[2][0] = 1; v = board[2][0]; break;
	case 11: board[2][1] = 1; v = board[2][1]; break;
	case 12: board[2][2] = 1; v = board[2][2]; break;
	case 13: board[2][3] = 1; v = board[2][3]; break;
	case 14: board[2][4] = 1; v = board[2][4]; break;
	case 15: board[3][0] = 1; v = board[3][0]; break;
	case 16: board[3][1] = 1; v = board[3][1]; break;
	case 17: board[3][2] = 1; v = board[3][2]; break;
	case 18: board[3][3] = 1; v = board[3][3]; break;
	case 19: board[3][4] = 1; v = board[3][4];break;
	case 20: board[4][0] = 1; v = board[4][0]; break;
	case 21: board[4][1] = 1; v = board[4][1]; break;
	case 22: board[4][2] = 1; v = board[0][2]; break;
	case 23: board[4][3] = 1; v = board[4][3]; break;
	case 24: board[4][4] = 1; v = board[4][4]; break;
	}

	cout << ceiling << endl;
	for(int t = 0, x = 0 ; t < 5 ; t++, x++){
		for(int c = 0, y = 0 ; c < 5 ; c++, y++){
			if(c == 0){cout << wall;}

			if(board[x][y] != 1){cout << space;}

			if(board[x][y] == 1){
				for(int q = 0 ; q < 3 ; q++){
					cout << FOOD[v][q];
				}
			}

			if(c != 4){cout << inwall;}
			if(c == 4){cout << wall << endl;}
		}
		if(t != 4){cout<< wall << row << wall << endl;}
	}
	cout << ceiling << endl;
}


int main(){
	//void db ();
	//db();
	foodplacer();



	return 0;
}
