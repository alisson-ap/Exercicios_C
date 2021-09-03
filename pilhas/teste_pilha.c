#include <stdio.h>
#include "pilha.h"

int main(void){
	Pilha P = pilha(1);

	int a;
	int b;

	empilha(10,P);
	a = topo(P);
	b = cheiap(P);

	printf("%d %d\n",a,b);

	b = desempilha(P);
	a = cheiap(P);

	printf("%d %d\n",b,a);

	return 0;
	}
