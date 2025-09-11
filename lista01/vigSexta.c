#include <stdio.h>
#include <math.h>

int main() {
    float valorA, valorB, valorC, media, mediaGeometrica;

    // Leitura
    printf("Digite o primeiro número: ");
    scanf("%f", &valorA);
    printf("Digite o segundo número: ");
    scanf("%f", &valorB);
    printf("Digite o terceiro número: ");
    scanf("%f", &valorC);

    // Lógica
    media = (valorA + valorB + valorC)/3;
    mediaGeometrica = pow((valorA*valorB*valorC), (1.0/3));

    // Exibição
    printf("A média aritmética é %.2f\n", media);
    printf("A média geométrica é %.2f\n", mediaGeometrica);

    return 0;
}
