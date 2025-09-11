#include <stdio.h>
#include <math.h>

int main() {
    int pontoX1, pontoY1, pontoX2, pontoY2;
    float distancia;

    // Leitura
    printf("Digite a coordenada X do primeiro ponto: ");
    scanf("%d", &pontoX1);
    printf("Digite a coordenada Y do primeiro ponto: ");
    scanf("%d", &pontoY1);
    printf("Digite a coordenada X do segundo ponto: ");
    scanf("%d", &pontoX2);
    printf("Digite a coordenada Y do segundo ponto: ");
    scanf("%d", &pontoY2);

    // Lógica
    distancia = sqrt(pow((pontoX2 - pontoX1), 2) + pow((pontoY2 - pontoY1), 2));

    // Exibição
    printf("A distância entre X e Y é %.2f\n", distancia);

    return 0;
}
