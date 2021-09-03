#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "pilha.h"

char *prefixa(char *e)
{
    static char s[513];
    int j = 0;
    Pilha P = pilha(513);
    for (int i = strlen(e) - 1; i >= 0; i--)
    {
        if (isalpha(e[i]))
        {
            s[j++] = e[i];
        }
        else if (strchr("~/|&", e[i]))
        {
            empilha(e[i], P);
        }
        else if (e[i] == '(')
        {
            s[j++] = desempilha(P);
        }
    }
    s[j] = '\0';
    destroip(&P);
    return _strrev(s);
}
int main(void)
{
    printf("\"%s\"\n", prefixa("((~A)|(B&C))"));  // deve exibir "|~A&BC"
    printf("\"%s\"\n", prefixa("((A|B)&(C|D))")); // deve exibir "&|AB|CD"
    return 0;
}