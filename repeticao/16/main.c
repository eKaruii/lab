#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int cont, n = 0, maiorP = 0, maiorI = 0;
    int menorP = INT_MAX, menorI = INT_MAX;

    for (cont = 0; cont < 300; cont++) {
        printf("Digite um numero: ");
        scanf("%i", &n);

        if (n % 2 == 0) {
            if (n > maiorP) {
                maiorP = n;
            }
            if (n < menorP) {
                menorP = n;
            }
        } else {
            if (n > maiorI) {
                maiorI = n;
            }
            if (n < menorI) {
                menorI = n;
            }
        }
    }


    if (menorP != INT_MAX) {
        printf("O menor par é %i\n", menorP);
        printf("O maior par é %i\n", maiorP);
    } else {
        printf("Nenhum número par foi digitado.\n");
    }

    if (menorI != INT_MAX) {
        printf("O menor ímpar é %i\n", menorI);
        printf("O maior ímpar é %i\n", maiorI);
    } else {
        printf("Nenhum número ímpar foi digitado.\n");
    }

    return 0;
}
