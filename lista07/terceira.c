#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct VETOR {
    int *matriz;
    int qntElementos;
    float media;
};

int main() {
    srand(time(NULL));

    struct VETOR vetor;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &vetor.qntElementos);

    vetor.matriz = malloc(vetor.qntElementos * sizeof(int));
    if (vetor.matriz == NULL) {
        printf("Erro ao alocar memória!\n");
        exit(1);
    }

    for(int i=0; i < vetor.qntElementos; i++) {
        vetor.matriz[i] = rand() % 100;
        vetor.media += vetor.matriz[i];
    };
    vetor.media /= vetor.qntElementos;

    printf("\n\t DADOS DO VETOR\n");
    printf("Matriz: [ ");
    for(int i=0; i < vetor.qntElementos; i++) printf("%d, ", vetor.matriz[i]);
    printf("]\n");
    printf("Média dos valores: %.1f\n", vetor.media);

    return 0;
}
