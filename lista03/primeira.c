#include <stdio.h>
#define TAM 15

int main() {
    float vetor[15];
    float *p, menor, maior, soma;

    for (p = vetor; p < vetor + 15; p++) {
        printf("Digite o %ld° número: ", p - vetor + 1);
        scanf("%f", p); 
    }
    menor = maior = *vetor;

    for (p = vetor + 1; p < vetor + 15; p++) {
        if (*p < menor) menor = *p;
        if (*p > maior) maior = *p;
    }
    soma = menor + maior;

    printf("\nMenor valor: %.2f", menor);
    printf("\nMaior valor: %.2f", maior);
    printf("\nSoma do menor e maior: %.2f\n", soma);

    return 0;
}
