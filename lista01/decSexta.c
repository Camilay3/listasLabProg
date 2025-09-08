#include <stdio.h>

int main() {
    int valor;

    // Leitura
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    // Lógica
    valor = (valor < 0) ? (valor * -1) : valor;

    // Exibição
    printf("O módulo é: R$%d\n", valor);

    return 0;
}
