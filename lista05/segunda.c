#include <stdio.h>
#define TAM 4

void encontra_enderecos_pares(int *v, int n, int **pares) {
    pares[0] = NULL;
    pares[1] = NULL;

    for (int i = 0; i < n; i++) {
        if (!(v[i] % 2)) {
            if (pares[0] == NULL) pares[0] = &v[i];
            pares[1] = &v[i];
        }
    }
}

int main() {
    int vetor[TAM];

    for (int i = 0; i < TAM; i++) {
        vetor[i] = i + 1;
        printf("%d [%p]\n", vetor[i], (void*)&vetor[i]);
    }

    int *pares[2];
    encontra_enderecos_pares(vetor, TAM, pares);

    (pares[0] != NULL) ? printf("Primeiro elemento par: %d [%p]\n", *pares[0], (void*)pares[0]) : printf("Nao ha elementos pares no vetor (primeiro).\n");

    (pares[1] != NULL) ? printf("Ultimo elemento par: %d [%p]\n", *pares[1], (void*)pares[1]) : printf("Nao ha elementos pares no vetor (ultimo).\n");

    return 0;
}
