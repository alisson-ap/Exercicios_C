﻿#include <stdio.h>
#include <conio.h>
#define dim 9


int I[dim][dim] = {
   {0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 1, 0, 0, 0, 0},
   {0, 0, 0, 1, 1, 1, 0, 0, 0},
   {0, 0, 1, 1, 1, 1, 1, 0, 0},
   {0, 1, 1, 1, 1, 1, 1, 1, 0},
   {0, 0, 2, 0, 0, 0, 2, 0, 0},
   {0, 0, 2, 0, 0, 0, 2, 0, 0},
   {0, 0, 2, 2, 2, 2, 2, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0}
}; 

void exibe(int I[dim][dim]){
		for(int i=-1; i<=dim; i++){
			_textcolor(4);
			for (int j=-1; j<dim; j++){
				if(i<0 && j<0) printf("  ");
				else if(i<0) printf("%2d", j);
				else if(j<0) printf("\n%d",i);
				else{
				_textcolor(I[i][j]);
				printf("%c%c", 219,219);
				}
			}
		_textcolor(5);
		}
	
	}
int main(void){
	exibe(I);
	return 0;
}
