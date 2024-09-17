#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 10
#define MAX 99
#define TAM 10



int main() {
    int n[TAM], contador;

    srand(time(NULL));

    for (contador = 0; contador < TAM; contador++) {

        n[contador] = rand() % ((MAX - MIN + 1) + MIN);

        if (n[contador] >= 35 && n[contador]<= 40)
        {
            printf("indice [%i] %i\n", contador, n[contador]);

            n[contador] = (n[contador]*0.05) + n[contador];

            printf("indice [%i] %.1f\n", contador, n[contador]);

        }
    }


return 0;
}
