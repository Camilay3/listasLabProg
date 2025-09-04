#include <stdio.h>

int main() {
    int x;

    // Leitura
    printf("Digite um valor inteiro: ");
    scanf("%d", &x);

    // Exibição
    printf("O triplo de %d é %d\n", x, x*3);
    printf("O quadrado de %d é %d\n", x, x*x);
    printf("O meio de %d é %d\n", x, x/2);

    return 0;
}
