#include <stdio.h>
#define TAM 4

int main() {
    int vetor[TAM];

    for (int i=0; i < TAM; i++) {
        vetor[i] = i+1;
        printf("%d [%p]\n", vetor[i], &vetor[i]);
    }

    for (int i=0; i < TAM; i++) {
        if (!(vetor[i] % 2)) {
            printf("Primeiro elemento par [%p]\n", &vetor[i]);
            break;
        }
    }

    return 0;
}
