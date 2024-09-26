#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p;
    float  sa, ft=0, mt=0, st=0, f,m,s;
    char e;

    for ( p = 0; p < 5; p ++)
    {
        printf("Qual o salario? ");
        scanf (" %f", &sa);

        printf("Qual o nivel de escolaridade? (Fundamental/F, Médio/M, Superior/S) ");
        scanf (" %c", &e);

        if ( e == 'F')
        {
            f = f + sa;
            ft++;
        }
        if ( e == 'M')
        {
            m = m + sa;
            mt++;
        }
        if ( e == 'S')
        {
            s = s + sa;
            st++;
        }
    }

     printf("A media dos salarios fundamental é %.2f\n", f/ft);
     printf("A media dos salarios medio é %.2f\n", m/mt);
     printf("A media dos salarios superior é %.2f\n", s/st);
    return 0;
}
