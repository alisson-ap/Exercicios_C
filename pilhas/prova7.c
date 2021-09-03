#include <stdio.h>
#include "fila.h" // fila de caracteres
int main(void) {
Fila F = fila(3);
enfileira(126,F);
enfileira(127,F);
enfileira(128,F);
while( !vaziaf(F) ) {
int x = desenfileira(F);
if( x<0 ) enfileira(desenfileira(F),F);
else printf("%d\n",x);
}
destroif(&F);
return 0;
}
