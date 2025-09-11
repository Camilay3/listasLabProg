#include <stdio.h>

int main() {
    int valor;

    // Leitura
    printf("Digite um número inteiro: ");
    scanf("%d", &valor);

    // Exibição
    (valor % 2) ? printf("O número %d é ímpar\n", valor) : printf("O número %d é par\n", valor);

    return 0;
}
