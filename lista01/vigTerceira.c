#include <stdio.h>

int main() {
    int valorX, valorN;
    int potencia = 1;

    // Leitura
    printf("Digite o primeiro número (X): ");
    scanf("%d", &valorX);
    printf("Digite o segundo número (N): ");
    scanf("%d", &valorN);

    // Lógica
    if (valorN < 0) {
        printf("O expoente deve ser um número inteiro não negativo.\n");

    } else {
        // Multiplica 2 por si mesmo 'n' vezes
        for (int i = 0; i < valorN; i++) {
            potencia *= 2;
        }
    }

    // Exibição
    printf("O produto entre %d e 2 elevado a %d é %d\n", valorX, valorN, (valorX * potencia));

    return 0;
}
