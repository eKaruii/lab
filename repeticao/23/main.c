#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main()
{
    int m;
    float i, im,t, tm = FLT_MAX ;

    for (m = 0; m < 20000; m++)
    {
        printf("Qual o tempo do maratonista em minutos? ");
        scanf (" %f", &t);

        printf("qual a inscri��o do maratonista ");
        scanf (" %f", &i);

        if ( t < tm)
        {
            tm = t;
            im = i;
        }

    }
    printf("o tempo do vencedor � %.1f",tm);
    printf("a inscri��o do vencedor � %.1f",im);
    return 0;
}
