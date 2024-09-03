#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, soma = 0;

    do
    {
        printf("Digite um número (diferente de 0 ou 0 para sair): ");
        scanf("%d", &N);

        if (N >= 10 && N <= 90 && N % 5 == 2)
            {
                soma += N;
            }
    }
    while( N != 0 );

    printf("A soma dos números lidos é: %d\n", soma);
    return 0;
}
