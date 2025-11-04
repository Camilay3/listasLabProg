#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3
#define RN 20

int main() {
    srand(time(NULL));
    int matriz[TAM][TAM];

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) matriz[i][j] = rand() % RN;
    }

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) printf("%d\t", matriz[i][j]);
        printf("\n");
    }
    
    printf("Diagonal principal: ");
    for (int i = 0; i < TAM; i++) printf("%d ", matriz[i][i]);
    printf("\n");

    return 0;
}
