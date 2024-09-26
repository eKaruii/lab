#include <stdio.h>
#include <stdlib.h>

int main()
{
    float TAF = 0, TAM = 0, auxa, FF = 0, MM = 0, MFA= 0, MMA= 0;
    int p = 0,  F= 0, M= 0, pm= 0, pf= 0;
    char auxs;

    for (p = 0; p < 50; p++)
    {
        printf("Qual o sexo da pessoa?(F/M) ");
        scanf (" %c", &auxs);

        printf("Qual a altura da pessoa? ");
        scanf (" %f", &auxa);

        if (auxs == 'F' )
        {
            F++;
            TAF = TAF + auxa;

            if (auxa > FF)
            {
                FF = auxa;
            }
            if (auxa > 1.82)
            {
                pf++;
            }
        }

        if (auxs == 'M' )
        {
            M++;
            TAM = TAM + auxa;

            if (auxa > MM)
            {
                MM = auxa;
            }
            if (auxa > 1.82)
            {
                pm++;
            }
        }
    }

    MFA = TAF / F;

    MMA = TAM / M;

    pf = (pf * 100)/ F;

    pm = (pm * 100)/ M;

    printf(" altura da mulher mais alta é %.2f\n", FF);
    printf(" altura do homem mais alto é %.2f\n", MM);

    printf(" a media das alturas das mulheres é %.2f\n", MFA);
    printf(" a media das alturas dos homens é %.2f\n", MMA);

    printf(" a porcentagem de mulheres com mais de 1.82 é %i%%\n", pf);
    printf(" a porcentagem de homens com mais de 1.82 é %i%%\n", pm);


    return 0;
}
