#include <stdio.h>

int main() {
    float real, cotacaoDolar;

    // Leitura
    printf("Digite um valor em real para conversão: R$ ");
    scanf("%f", &real);
    printf("Digite o valor da cotação atual do dólar: ");
    scanf("%f", &cotacaoDolar);

    // Exibição
    printf("R$%.2f em dólar é $%.2f\n", real, real*cotacaoDolar);

    return 0;
}
