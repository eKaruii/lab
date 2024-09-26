#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v=0, tp=0,ts=0,n=0, cont;

    for (cont = 0; cont < 50; cont++)
    {
        printf( " qual candidato voce quer vota? (1/2 0 para nulo) ");
        scanf(" %i", &v);

        if (v == 1)
        {
            tp ++;
        }

        else if (v == 2)
        {
            ts ++;
        }

        else
        {
            n ++;
        }

    }
    printf("a porcentagens de votos no primeiro candidato é %i%%\n", tp*2);
    printf("a porcentagens de votos no segundo candidato é %i%%\n", ts*2);
    printf("a porcentagens de votos nulos é %i%%\n", n*2);

    return 0;
}
