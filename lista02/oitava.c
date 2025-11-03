#include <stdio.h>

int main(){
    float valor, entrada;
    int parcelas;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor);

    parcelas = valor / 3;
    entrada = valor - (2 * parcelas);

    printf("Valor da entrada: %.2f\n", entrada);
    printf("Valor das parcelas: %d\n", parcelas);

    return 0;
}
