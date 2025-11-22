#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7

int main() {
    srand(time(NULL));
    int X[N], F[N] = {0};

    for (int i = 0; i < N; i++) X[i] = rand() % N; // Preenche com valores aleatórios entre 0 e N-1
    for (int i = 0; i < N; i++) F[X[i]]++; // Conta as ocorrências

    // Imprime resultados
    printf("X = [ ");
    for (int i = 0; i < N; i++) printf("%d ", X[i]);
    printf("]\n");

    printf("F = [ ");
    for (int i = 0; i < N; i++) printf("%d ", F[i]);
    printf("]\n");

    return 0;
}
