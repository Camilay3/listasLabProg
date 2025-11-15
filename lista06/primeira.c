#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarVetor(int *, int *, int, int);
void calcularCoocorrencias(int *, int *, int **, int, int);
void imprimirVetor(int *, int);
void imprimirMatriz(int **, int);

int main(int argc, char *argv[]) {
    srand(time(NULL));

    if (argc != 3) {
        printf("Uso correto: %s <tamanho do vetor> <limite superior>\n", argv[0]);
        exit(1);
    }

    int tam = atoi(argv[1]);
    int limite = atoi(argv[2]);

    if (tam <= 0 || limite <= 0) {
        printf("O tamanho do vetor e do limite superior devem ser maiores que zero.\n");
        exit(2);
    }

    // Declarações
    int *X = (int *)malloc(tam * sizeof(int));   // Usa calloc, inicializando com zero
    int *Y = (int *)malloc(tam * sizeof(int));   // Usa calloc, inicializando com zero
    int **M = (int **)calloc(limite, sizeof(int *)); // Aloca o vetor de ponteiros para as linhas da matriz

    if (X == NULL || Y == NULL || M == NULL) {
        printf("Erro na alocação de memória.\n");
        exit(3);
    }

    for (int i = 0; i < limite; i++) {
        M[i] = (int *)calloc(limite, sizeof(int)); // Usa calloc para cada linha da matriz, inicializando com zero
        if (*(M+i) == NULL) {
            printf("Erro ao alocar memória para a linha %d da matriz.\n", i);
            exit(4);
        }
    }

    gerarVetor(X, Y, tam, limite);
    calcularCoocorrencias(X, Y, M, tam, limite);
    imprimirVetor(X, tam);
    imprimirVetor(Y, tam);
    imprimirMatriz(M, limite);

    // Desalocar memória
    free(X);
    free(Y);
    for (int i = 0; i < limite; i++) free(*(M+i));
    free(M);

    return 0;
}

void gerarVetor(int *px, int *py, int TAM, int MAX) {
    int r, *pr = &r;

    for (int i = 0; i < TAM; i++) *(px + i) = rand() % MAX; // Gera números aleatórios para o vetor X

    // Gera vetor Y em função do X
    for (int i = 0; i < TAM; i++) {
        *pr = rand() % 11;

        if (*(px+i)+*pr >= MAX) {
            *(py+i) = MAX-1;
        } else if (*(px+i)-*pr < 0) {
            *(py+i) = 0;
        } else {
            if (*pr <= 3) *(py+i) = *(px+i);
            else if (3 < *pr && *pr <= 5) *(py+i) = *(px+i)-1;
            else if (5 < *pr && *pr <= 7) *(py+i) = *(px+i)+1;
            else if (7 < *pr && *pr <= 9) *(py+i) = *(px+i)-2;
            else if (9 < *pr && *pr <= 10) *(py+i) = *(px+i)+2;
        }
    }
}

void calcularCoocorrencias(int *X, int *Y, int **M, int n, int N) {
    for (int i = 0; i < n; i++) {
        // Garante que X[i] e Y[i] estão dentro do limite
        if (*(X+i) >= 0 && *(X+i) < N && *(Y+i) >= 0 && *(Y+i) < N) {
            *(*(M + X[i]) + Y[i]) += 1;
        }
    }
}

void imprimirVetor(int *vetor, int TAM) {
    printf("Vetor: ");
    for (int i = 0; i < TAM; i++) printf("%d ", *(vetor + i));
    printf("\n");
}

void imprimirMatriz(int **pm, int MAX){
    printf("\nMatriz M:\n");
    for (int i = 0; i < MAX; i++) {
        printf("[ ");
        for (int j = 0; j < MAX; j++) printf("%d ", *(*(pm+i)+j));
        printf("]\n");
    }
}
