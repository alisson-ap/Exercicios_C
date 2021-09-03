#include <stdio.h>
#include "fila.h"

int main(void){
	int v;
	
	
	Fila F = fila(3);
	
	enfileira(1,F);
	enfileira(2,F);
	enfileira(3,F);
		
	for(int i=0; i<=2; i++){
		v = desenfileira(F);
		printf("%d\n",v);
		}
	destroif(&F);	
	return 0;
	}
