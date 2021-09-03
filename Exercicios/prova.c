#include <stdio.h>
#include "fila.h"

int main(void)
{
    int i = 1;
    Fila F = fila(3);

    enfileira(1, F);
    enfileira(2, F);
    enfileira(3, F);

    enfileira(desenfileira(F), F);

    while (i <= 3)
    {
        int a = desenfileira(F);
        printf("%d", a);

        i++;
    }
}