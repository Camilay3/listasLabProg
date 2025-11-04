#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define TAM 3

int main() {
    int vetor[TAM], soma = 0, multiplicacao = 1;

    srand(time(NULL));
    for(int i=0; i < TAM; i++) {
        vetor[i] = rand() % 20; // Entre 0 e 19
        printf("%d\n", vetor[i]);
        soma += vetor[i];
        multiplicacao *= vetor[i];
    }

    printf("A média aritmética é %.1f\n", (float)soma/TAM);
    printf("A média geométrica é %.1f\n", pow(multiplicacao, (1.0/TAM)));
    return 0;
}
