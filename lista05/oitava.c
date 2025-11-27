#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 6 

int soma_diagonal(const int *mat, int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) soma += *(mat + i * n + i);
    return soma;
}

int main() {
    int *mat = malloc(sizeof(int) * N * N);
    if (!mat) {
        perror("malloc");
        return 1;
    }

    srand((unsigned) time(NULL));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) *(mat + i * N + j) = rand() % 10;
    }

    printf("Matriz %dx%d gerada:\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) printf("%2d ", *(mat + i * N + j));
        printf("\n");
    }

    int soma = soma_diagonal(mat, N);
    printf("\nSomatorio da diagonal principal: %d\n", soma);
    (!(soma % 2)) ? printf("O somatorio da diagonal principal e par.\n") : printf("O somatorio da diagonal principal é impar.\n");

    free(mat);
    return 0;
}
