#include <stdio.h>

int main() {
    unsigned char numero, fat;

    // Leitura
    printf("Digite um número inteiro positivo: ");
    scanf("%hhu", &numero);

    // Lógica
    fat = 1;
    if (numero) {
        for (int i = numero; i > 1; i--) {
            fat *= i;
        }
    }

    // Exibição
    printf("O fatorial de %hhu é %hhu\n", numero, fat);

    return 0;
}
