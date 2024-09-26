#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s, vip = 0, stand=0;
    int t,c;

    do
    {
        printf("deseja cadastrar outro cliente?(1 para sim e 0 para não) ");
        scanf("%i", &c);

        if (c ==1)
        {
            printf("Qual o salario do cliente? ");
            scanf("%f", &s);

            if (s >= 5000)
            {
                vip++;
            }
            if (s < 5000)
            {
                stand++;
            }
            t++;
        }
    }
    while( c != 0 );

    vip = (vip*100)/t;
    stand = (stand*100)/t;

    printf("porcentagem de catoes vip é %.0f%%\n", vip);
    printf("porcentagem de catoes standard é %.0f%%\n", stand);
    return 0;
}
