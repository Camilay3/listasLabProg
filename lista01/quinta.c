#include <stdio.h>

int main() {
    float altura, peso;
    char sexo;

    // Leitura
    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite seu sexo ([F] Feminino - [M] Masculino): ");
    scanf("%c ", &sexo);

    // Lógica
    peso = (sexo == 'F' || sexo == 'f') ? (62.1*altura - 44.7) : (72.7*altura - 58);

    // Exibição
    printf("O seu peso ideal é %.2f kg\n", peso);

    return 0;
}
