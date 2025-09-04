#include <stdio.h>

int main() {
    int x;

    // Leitura
    printf("Digite um valor inteiro: ");
    scanf("%d", &x);

    // Exibição
    printf("%d em Hexadecimal: %X\n", x, x);
    printf("%d em Octal: %o\n", x, x);

    return 0;
}
