#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

#define KEY_UP 72 + 256
#define KEY_DOWN 80 + 256
#define KEY_RIGHT 77 +256
#define KEY_LEFT 75 + 256


void main(){
	srand(time(NULL));
	
	int dim = 5;
	int laberinto[dim][dim];
	int vidas = 3;
	int ganar = 0;
	int x = 4, y = 4;
	int i;
	int j;
	int random;

	for(i = 0 ; i < 5 ; i++){
		for(j = 0 ; j < 5 ; j++){
			random = rand() % 2;
			if(random==1){
				laberinto[i][j] = 1;
			}else{
				laberinto[i][j] = 0;
			}
		}
	}
	laberinto[0][0] = 4;
	
	
	do{
		for(i = 0 ; i < 5 ; i++){
			for(j = 0 ; j < 5 ; j++){
				printf("%d", laberinto[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		printf("Eres un pobre alumno (i) en busca de su cuatro (4)\n");
		printf("Avanza por los pasillos (0) y trata de evadir a los profes (1)\n");
		printf("Tienes %d vidas\n", vidas);
		gotoxy(x, y); printf("i");
		int tecla;
		tecla = getch();
			
		if(tecla==0||tecla==224){
			tecla = 256+getch();
		}
		
		switch(tecla){
			case KEY_UP:
				if((y-1)>-1){
					y--;
				}
				break;
			case KEY_DOWN:
				if((y+1)<5){
					y++;
				}
				break;
			case KEY_LEFT:
				if((x-1)>-1){
					x--;
				}
				break;
			case KEY_RIGHT: 
				if((x+1)<5){
					x++;
				}
		}
		
		if(laberinto[y][x] == 1){
			vidas--;
		}
		
		if(vidas == 0){
			system("cls");
			printf("YOU LOSE (Un 1)");
			break;
		}
		
		if(laberinto[y][x] == 4){
			system("cls");
			printf("YOU WIN (Toma tu 4)");
			break;
		}
		system("cls");
	}while(vidas != 0);
	
}


void gotoxy(int x, int y){
	HANDLE hCon;
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hCon, dwPos);
}
