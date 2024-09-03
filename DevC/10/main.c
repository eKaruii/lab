#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, multi;
    float media, soma = 0, cont= 0;
    do
    {
        printf("Digite o ultimo numero para multiplicar com 6: ");
        scanf("%i", &n);
    }
    while (n < 1);

    for (multi = 1; multi <= n; multi++)
    {
        soma = soma + (multi * 6);
        cont++;
    }

    media = soma / cont;

    printf("A media é %.2f", media);
    return 0;
}
