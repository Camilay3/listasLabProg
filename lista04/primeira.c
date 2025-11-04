#include <stdio.h>

int main() {
    int numeroA, numeroB, soma;
    int *pA = &numeroA, *pB = &numeroB, *pSoma = &soma;

    printf("Digite o primeiro número: ");
    scanf("%d", pA);
    printf("Digite o segundo número: ");
    scanf("%d", pB);

    *pSoma = *pA + *pB;
    printf("A soma é %d e está guardada em [%p]\n", *pSoma, pSoma);

    return 0;
}
