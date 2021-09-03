#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "pilha.h"

char *posfixa(char *e){
	static char s[256];
	int j = 0;
	Pilha p = pilha(256);
	for (int i=0; e[i]; i++)
		if(isdigit(e[i]))s
				[j++] = e[i];
		else if(strchr("+*/-",e[i])) emiplha(e[i],p);
		else if(e[i]==')') s[j++] = desempilha(p);
	s[j]='\0';
	destroip(&p);
	return s;

int main(void){
	char e[513];
	printf("Infixa? ");
	gets(e);
	printf("Posfixa: %s\n", posfixa(e));
	return 0;
}
