#include <stdio.h>
#include <stdlib.h>

void gotoxy(int x, int y);
void border(int p);
void ui();

int main(){
	system("cls");
	ui();
	border(2);	
	gotoxy(5,35);
	//system("pause");
}

void gotoxy(int x, int y){
	printf("\e[%d;%df", y, x);
}

void border(int p){
	int i, j;
	
	if(p>=0){
		gotoxy(3,2);printf("%c", 201);
		gotoxy(89,2);printf("%c", 187);
		gotoxy(3,28);printf("%c", 200);
		gotoxy(89,28);printf("%c", 188);
		
		for(i = 0; i<85; i++){
			gotoxy(4+i,2);printf("%c", 205);
			gotoxy(4+i,28);printf("%c", 205);	
			
		}
		
		for(i=0; i<25; i++){
			gotoxy(3,3+i);printf("%c", 186);
			gotoxy(89,3+i);printf("%c", 186);
		}
	}
	if(p==1||p==2){
		/////////////////////////////PROTAG PORTRAIT///////////////////////
		gotoxy(5,16);printf("%c", 201);
		for(int i=0;i<21;i++)
			printf("%c", 205);
		printf("%c", 187);
	
		for(int i=0;i<10;i++){
			gotoxy(27,17+i);printf("%c", 186);
			gotoxy(5,17+i);printf("%c", 186);
		}
	
		gotoxy(5,27);printf("%c", 200);
		for(int i=0;i<21;i++)
			printf("%c", 205);
		printf("%c", 188);
	}
	if(p==2){////////////////////////////////////////DUNGEON PORTRAIT///////////////////////////////
		
		gotoxy(5,3);printf("%c", 201);
		for(i=0;i<=20;i++){
			printf("%c",205);	
		}
		printf("%c", 187);
		
		for(i=0;i<10;i++){
			gotoxy(5,4+i);printf("%c", 186);
			gotoxy(27,4+i);printf("%c", 186);	
		}
		
		gotoxy(5,14);printf("%c", 200);
		for(i=0;i<=20;i++){
			printf("%c", 205);	
		}
		printf("%c", 188);
		
		//TOP BAR//
		gotoxy(30,9);
		for(i=0;i<57;i++)
			printf("%c",205);
		
		////////////////////////////ENEMY PROTRAIT//////////////////////////////////
		gotoxy(65,16);printf("%c", 201);
		for(int i=0;i<21;i++)
			printf("%c", 205);
		printf("%c", 187);
		
		for(int i=0;i<10;i++){
			gotoxy(87,17+i);printf("%c", 186);
			gotoxy(65,17+i);printf("%c", 186);
		}
	
		gotoxy(65,27);printf("%c",200);
		for(int i=0;i<21;i++)
			printf("%c", 205);
		printf("%c", 188);
	
		//BOTTOM BAR//	
		gotoxy(29,21);
		for(int i=0;i<35;i++)
			printf("%c", 205);
	}
}

void ui(){
	gotoxy(29,17);printf("Enemy Name Here");
	gotoxy(29,18);printf("Health: ");
	gotoxy(29,19);printf("Attack: ");
	gotoxy(29,20);printf("Speed : ");
	
	gotoxy(29,22);printf("[1] Attack");
	gotoxy(29,23);printf("[2] Dodge");
	gotoxy(29,24);printf("[3] Run Away");
	gotoxy(29,25);printf("                                    ");
	gotoxy(29,26);printf("Select your action");
	
}
