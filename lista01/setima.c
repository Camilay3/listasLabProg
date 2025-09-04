#include <stdio.h>

int main() {
    int valor;

    // Leitura
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    // Exibição
    printf("%d elevado ao quadrado é %d\n", valor, valor*valor);

    return 0;
}
