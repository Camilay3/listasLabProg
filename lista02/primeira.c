#include <stdio.h>

int main() {
    char numero = 1;

    while (numero) {
        // Leitura
        printf("Digite um número entre 1 e 7 (0 para cancelar): ");
        scanf("%hhd", &numero);

        // Lógica
        if (numero < 0 || numero > 7) {
            printf("Número inválido\n");
        } else {
            switch (numero) {
                case 1:
                    printf("Domingo\n");
                    break;
                case 2:
                    printf("Segunda feira\n");
                    break;
                case 3:
                    printf("Terça feira\n");
                    break;
                case 4:
                    printf("Quarta feira\n");
                    break;
                case 5:
                    printf("Quinta feira\n");
                    break;
                case 6:
                    printf("Sexta feira\n");
                    break;
                case 7:
                    printf("Sábado\n");
                    break;

                default:
                    break;
            }
        }
    }
    printf("Operação cancelada\n");

    return 0;
}
