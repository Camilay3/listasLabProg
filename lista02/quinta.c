#include <stdio.h>

int main() {
    int numero, maior = 0, menor;

    // Leitura
    printf("Digite um número inteiro (0 para cancelar): ");
    scanf("%d", &numero);
    menor = numero;

    while (numero) {
        // Leitura
        printf("Digite um número inteiro (0 para cancelar): ");
        scanf("%d", &numero);

        // Lógica
        if (numero < menor) {
            menor = numero;
        } else if (numero > maior) {
            maior = numero;
        }

        // Exibição
        printf("O maior número é %d e o menor é %d\n", maior, menor);
    }

    printf("Operação cancelada\n");
    return 0;
}
