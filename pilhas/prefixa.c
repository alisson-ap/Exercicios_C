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

int main(void){

	puts(prefixa("((2*3) + (8/4))"));
	return 0;
	} 
