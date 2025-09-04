#include <stdio.h>

int main() {
    int horas, minutos, segundos;

    // Leitura
    printf("Digite a quantidade de horas: ");
    scanf("%d", &horas);
    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);
    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);

    // Lógica
    segundos += ((horas*60) + minutos)*60;

    // Exibição
    printf("O total de segundos é %d\n", segundos);

    return 0;
}
