#include <stdio.h>
#include "pilha.h"

int main(void)
{
    Pilha P = pilha(3);
    int a, b;

    a = cheiap(P);
    b = vaziap(P);

    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}