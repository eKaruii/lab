#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 10
#define MAX 99
#define TAM 100



int main() {
    int n[TAM];
    int contador;

    srand(time(NULL));


    for (contador = 0; contador < TAM; contador++) {

        n[contador] = rand() % (MAX - MIN + 1) + MIN;

        if (n[contador] % 2 == 1 && n[contador] % 7 == 0) {
            printf("indice [%i] %i\n", contador, n[contador]);
        }
    }

    return 0;
}
