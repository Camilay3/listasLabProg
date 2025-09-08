#include <stdio.h>

int main() {
    int diasTrabalhados;
    float valorLiquido;

    // Leitura
    printf("Digite o seu número de dias trabalhados: ");
    scanf("%d", &diasTrabalhados);

    // Lógica
    valorLiquido = (diasTrabalhados*45.22500); // Valor do dia com desconto IR

    if (diasTrabalhados > 10 && diasTrabalhados <= 20) {
        valorLiquido *= 1.20; 

    } else if (diasTrabalhados > 20) {
        valorLiquido *= 1.30;
    }

    // Exibição
    printf("O valor que você deverá receber é: R$%.2f\n", valorLiquido);

    return 0;
}
