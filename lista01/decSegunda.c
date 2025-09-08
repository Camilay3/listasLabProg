#include <stdio.h>

int main() {
    int valorA, valorB, varTemp;

    // Leitura
    printf("Digite o primeiro número (A): ");
    scanf("%d", &valorA);
    printf("Digite o segundo número (B): ");
    scanf("%d", &valorB);

    // Lógica
    varTemp = valorA;
    valorA = valorB;
    valorB = varTemp;

    // Exibição
    printf("O novo valor de A é %d\n", valorA);
    printf("O novo valor de B é %d\n", valorB);

    return 0;
}
