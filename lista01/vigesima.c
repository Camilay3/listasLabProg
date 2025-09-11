#include <stdio.h>

int main() {
    int valorA, valorB;

    // Leitura
    printf("Digite o primeiro número (A): ");
    scanf("%d", &valorA);
    printf("Digite o segundo número (B): ");
    scanf("%d", &valorB);

    // Exibição
    (valorA % valorB) ? printf("O número %d não é múltiplo de %d\n", valorA, valorB) : printf("O número %d é múltiplo de %d\n", valorA, valorB);

    return 0;
}
