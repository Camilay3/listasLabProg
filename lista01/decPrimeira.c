#include <stdio.h>

int main() {
    int valorA, valorB;

    // Leitura
    printf("Digite primeiro número: ");
    scanf("%d", &valorA);
    printf("Digite o segundo número: ");
    scanf("%d", &valorB);

    // Exibição
    printf("A soma entre %d e %d é %d\n", valorA, valorB, valorA+valorB);
    printf("A diferença entre %d e %d é %d\n", valorA, valorB, valorA-valorB);
    printf("O produto entre %d e %d é %d\n", valorA, valorB, valorA*valorB);
    printf("O resto da divisão entre %d e %d é %d\n", valorA, valorB, valorA%valorB);

    return 0;
}
