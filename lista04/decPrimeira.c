#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7

int main() {
    srand(time(NULL));
    int X[N], Y[N], M[N][N] = {0};

    // Gera X e Y aleatórios
    for (int i = 0; i < N; i++) {
        X[i] = rand() % N;
        Y[i] = rand() % N;
    }

    for (int i = 0; i < N; i++) M[X[i]][Y[i]]++; // Gera matriz de coocorrências
    
    // Imprime vetores
    printf("X = [ ");
    for (int i = 0; i < N; i++) printf("%d ", X[i]);
    printf("]\n");

    printf("Y = [ ");
    for (int i = 0; i < N; i++) printf("%d ", Y[i]);
    printf("]\n\n");

    // Imprime matriz
    printf("M =\n");
    for (int i = 0; i < N; i++) {
        printf("[ ");
        for (int j = 0; j < N; j++) printf("%d ", M[i][j]);
        printf("]\n");
    }

    return 0;
}
