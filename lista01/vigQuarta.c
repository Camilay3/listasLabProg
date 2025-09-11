#include <stdio.h>

int main() {
    int segundos, horas, minutos, segundosRestantes;

    // Leitura
    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);

    // Lógica
    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    segundosRestantes = segundos % 60;

    // Exibição
    printf("Há %d horas, %d minutos e %d segundos em %d segundos.\n", horas, minutos, segundosRestantes, segundos);

    return 0;
}
