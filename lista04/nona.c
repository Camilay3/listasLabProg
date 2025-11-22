#include <stdio.h>

void ordenarVetor(int *, int);
void imprimirVetor(int *, int);

int main() {
    int x[4] = {8, 4, 6, 2};
    ordenarVetor(x, 4);
    imprimirVetor(x, 4);
    return 0;
}

void ordenarVetor(int *vetor, int tam) {
    int flag = 0, temp;

    for (int i=0; i < tam; i++) {
        flag = 0;
        for (int j=0; j < tam; j++) {
            if (*(vetor+j) > *(vetor+j+1)) {
                temp = *(vetor+j);
                *(vetor+j) = *(vetor+j+1);
                *(vetor+j+1) = temp;
                flag = 1;
            }
        }
        if (!flag) break;
    }
}

void imprimirVetor(int *vetor, int tam) {
    printf("[ ");
    for (int i=0; i < tam; i++) printf("%d, ", *(vetor+i));
    printf("]\n");
}
