#include <stdio.h>

int main() {
    float volume, comprimento, altura, largura;

    // Leitura
    printf("Digite o valor do comprimento da caixa: ");
    scanf("%f", &comprimento);
    printf("Digite o valor da altura da caixa: ");
    scanf("%f", &altura);
    printf("Digite o valor da largura da caixa: ");
    scanf("%f", &largura);

    // Lógica
    volume = comprimento * altura * largura;

    // Exibição
    printf("O volume da caixa retangular é %.2f\n", volume);

    return 0;
}
