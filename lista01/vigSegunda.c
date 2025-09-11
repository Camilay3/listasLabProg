#include <stdio.h>

int main() {
    char valor[4];

    // Leitura
    printf("Digite um número inteiro de três dígitos (XXX): ");
    scanf("%s", valor);

    // Exibição
    printf("O inverso de %s é %c%c%c\n", valor, valor[2], valor[1], valor[0]);

    return 0;
}
