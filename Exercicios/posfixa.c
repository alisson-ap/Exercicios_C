#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "pilha.h"

/*char *posfixa(char *e)
{
   static char s[256];
   int j = 0;
   Pilha P = pilha(256);
   for (int i = 0; e[i]; i++)
      if (isdigit(e[i]))
         s[j++] = e[i];
      else if (strchr("+*-/", e[i]))
         empilha(e[i], P);
      else if (e[i] == ')')
         s[j++] = desempilha(P);
   s[j] = '\0';
   destroip(&P);
   return s;
}

int main(void)
{
   puts(posfixa("((2*3) + (8/4))"));
   return 0;
}
*/
char *posfixa(char *e)
{
    static char s[256];
    int j = 0;

    Pilha P = pilha(256);
    for (int i = 0; e[i]; i++)
    {
        if (isdigit(e[i]))
        {
            s[j++] = e[i];
        }
        else if (strchr("+*/-", e[i]))
        {
            empilha(e[i], P);
        }
        else if (e[i] == ')')
        {
            s[j++] = desempilha(P);
        }
    }

    s[j] = '\0';
    destroip(&P);
    return s;
}

int valor(char *e)
{
    Pilha P = pilha(256);
    for (int i = 0; e[i]; i++)
        if (isdigit(e[i]))
            empilha(e[i] - '0', P);
        else
        {
            int y = desempilha(P);
            int x = desempilha(P);
            switch (e[i])
            {
            case '+':
                empilha(x + y, P);
                break;
            case '-':
                empilha(x - y, P);
                break;
            case '*':
                empilha(x * y, P);
                break;
            case '/':
                empilha(x / y, P);
                break;
            }
        }
    int z = desempilha(P);
    destroip(&P);
    return z;
}

int main(void)
{
    //puts(posfixa("2*(2*3) + (8/4))"));
    puts(valor("63/1+4*5-"));
    return 0;
}