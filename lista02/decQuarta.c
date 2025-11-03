#include <stdio.h>

int main() {
    int limiteA, limiteB;
    int contador = 0;

    printf("Digite o limite A: ");
    scanf("%d", &limiteA);
    printf("Digite o limite B: ");
    scanf("%d", &limiteB);

    if (limiteA > limiteB) {
        for (int i = limiteB; i <= limiteA; i++) {
            if(!(i%3)) contador++;
        }
    } else {
        for (int i = limiteA; i <= limiteB; i++) {
            if(!(i%3)) contador++;
        }
    }

    printf("Quantidade de divisíveis: %d\n", contador);
    return 0;
}
