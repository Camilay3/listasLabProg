#include <stdio.h>

int main() {
    float raio, pi;

    // Leitura
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    // Lógica
    pi = 3.14159;

    // Exibição
    printf("O diâmetro é: %.1f\n", raio*2);
    printf("A circunferência é: %.1f\n", 2*pi*raio);
    printf("A área é: %.1f\n", pi*(raio*raio));

    return 0;
}
