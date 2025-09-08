#include <stdio.h>

int main() {
    float temperatura;

    // Leitura
    printf("Digite a temperatura (em graus Celsius): ");
    scanf("%f", &temperatura);

    // Lógica
    temperatura = ((9 * temperatura) + 160) / 5;

    // Exibição
    printf("Em Fahrenheit: %.2f°F\n", temperatura);

    return 0;
}
