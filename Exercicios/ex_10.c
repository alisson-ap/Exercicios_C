#include <stdio.h>
#include "fila.h"
int copia(Fila F, Fila G)
{
    int c = 0, x;
    while (!vaziaf(G))
    {
        desenfileira(G);
    }
    while (!vaziaf(F))
    {
        enfileira(desenfileira(F), G);
        c++;
    }
    while (c >= 1)
    {
        x = desenfileira(G);
        enfileira(x, F);
        enfileira(x, G);
        c--;
    }
}

int main(void)
{
    Fila A = fila(100), B = fila(200), C = fila(300);
    for (int x = 10; x <= 50; x += 10)
        enfileira(x, A);
    for (int x = 60; x <= 90; x += 10)
        enfileira(x, B);

    /*while (!vaziaf(A))
    {
        printf("%d\n", desenfileira(A));
    }
    while (!vaziaf(B))
    {
        printf("%d\n", desenfileira(B));
    }

    return 0;
    */
    copia(A, C);
    copia(B, C);
    printf("\nA:");
    while (!vaziaf(A))
    {
        printf(" %d", desenfileira(A));
    } // deve exibir A: 10 20 30 40 50
    printf("\nB:");
    while (!vaziaf(B))
    {
        printf(" %d", desenfileira(B));
    } // deve exibir B: 60 70 80 90
    printf("\nC:");
    while (!vaziaf(C))
    {
        printf(" %d", desenfileira(C));
    } // deve exibir C: 60 70 80 90
    printf("\n");
    destroif(&A);
    destroif(&B);
    destroif(&C);
    return 0;
}