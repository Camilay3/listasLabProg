#include <stdio.h>

int main() {
    float conta;

    // Leitura
    printf("Digite o valor da conta do restaurante: ");
    scanf("%f", &conta);

    // Lógica
    conta += conta*0.1;

    // Exibição
    printf("O valor final da conta com a taxa é R$%.2f\n", conta);

    return 0;
}
