#include <stdio.h>
#include <stdlib.h>

int main()
{
    int np, ni, somap = 0, somai = 0;
    for (np = 100; np <= 999; np+=2)
    {
        somap = somap + np;
    }

    for (ni = 101; ni <= 999; ni+=2)
    {
        somai = somai + ni;

    }

    printf("a soma dos pares é %i\n", somap);
    printf("a soma dos impares é %i\n", somai);
    return 0;
}
