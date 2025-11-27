#include <stdio.h>
#include <stdlib.h>

void lerMatriz(int *M, int lin, int col);
void binarizarMatriz(int *M, int *S, int lin, int col, int t);
void imprimirMatriz(int *M, int lin, int col);

int main() {
    int lin, col, t;

    printf("Quantidade de linhas: ");
    scanf("%d", &lin);

    printf("Quantidade de colunas: ");
    scanf("%d", &col);

    printf("Digite o limiar t: ");
    scanf("%d", &t);

    int *M = malloc(lin * col * sizeof(int));
    int *S = malloc(lin * col * sizeof(int));

    printf("\nDigite os elementos da matriz M:\n");
    lerMatriz(M, lin, col);

    binarizarMatriz(M, S, lin, col, t);

    printf("\nMatriz S (binarizada):\n");
    imprimirMatriz(S, lin, col);

    free(M);
    free(S);
    return 0;
}

void lerMatriz(int *M, int lin, int col) {
    for(int i = 0; i < lin; i++) {
        for(int j = 0; j < col; j++) scanf("%d", (M + i*col + j));
    }
}

void binarizarMatriz(int *M, int *S, int lin, int col, int t) {
    for(int i = 0; i < lin; i++) {
        for(int j = 0; j < col; j++) {
            int valor = *(M + i*col + j);
            *(S + i*col + j) = (valor > t) ? 1 : 0;
        }
    }
}

void imprimirMatriz(int *M, int lin, int col) {
    for(int i = 0; i < lin; i++) {
        for(int j = 0; j < col; j++) printf("%d ", *(M + i*col + j));
        printf("\n");
    }
}
