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
        printf("O menor par � %i\n", menorP);
        printf("O maior par � %i\n", maiorP);
    } else {
        printf("Nenhum n�mero par foi digitado.\n");
    }

    if (menorI != INT_MAX) {
        printf("O menor �mpar � %i\n", menorI);
        printf("O maior �mpar � %i\n", maiorI);
    } else {
        printf("Nenhum n�mero �mpar foi digitado.\n");
    }

    return 0;
}
