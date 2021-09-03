#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "pilha.h"

char *prefixa(char *e) {
   static char s[256];
   int j = 0;
   Pilha P = pilha(256);
   for(int i=strlen(e)-1; i>=0; i--)
      if( isdigit(e[i]) ) s[j++] = e[i];
      else if( strchr("+*-/",e[i]) ) empilha(e[i],P);
      else if( e[i]=='(' ) s[j++] = desempilha(P);
   s[j] = '\0';
   destroip(&P);
   return _strrev(s);
}

int valpre(char *e) {
   Pilha P = pilha(256);
   for(int i=strlen(e)-1; i>=0; i--)
      if( isdigit(e[i]) ) empilha(e[i]-'0',P);
      else {
			int x = desempilha(P);
			int y = desempilha(P);
	 		switch( e[i] ) {
			    case '+': empilha(x+y,P); break;
			    case '-': empilha(x-y,P); break;
			    case '*': empilha(x*y,P); break;
			    case '/': empilha(x/y,P); break;
	 		}
      }	
   int z = desempilha(P);
   destroip(&P);
   return z;
}

int main(void){
	char infixa[] = "((2*3) + (8/4))";
	char *pre = prefixa(infixa);

	printf("Prefixa: %s\n", pre);
	printf("Valor: %d\n", valpre(pre));
	return 0;
	} 
