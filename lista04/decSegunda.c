#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7

int main() {
    srand(time(NULL));
    int X[N], Y[N], M[N][N] = {0};

    for (int i = 0; i < N; i++) X[i] = rand() % N; // Gera X aleatório

    // Gera Y com base em X
    for (int i = 0; i < N; i++) {
        int r = rand() % 11;

        if (r <= 3) Y[i] = X[i];
        else if (r <= 5) Y[i] = X[i] - 1;
        else if (r <= 7) Y[i] = X[i] + 1;
        else if (r <= 9) Y[i] = X[i] - 2;
        else Y[i] = X[i] + 2;
        
        // Correção de limites
        if (Y[i] < 0) Y[i] = 0;
        if (Y[i] >= N) Y[i] = N - 1;
    }

    for (int i = 0; i < N; i++) M[X[i]][Y[i]]++; // Monta a matriz M

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
