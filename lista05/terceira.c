#include <stdio.h>

int main() {
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int X[n], min = X[0], max = X[0];

    printf("Digite os %d valores inteiros:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &X[i]);

    for (int i = 1; i < n; i++) {
        if (X[i] < min) min = X[i];
        if (X[i] > max) max = X[i];
    }

    if (max == min) {
        printf("\nTodos os valores são iguais. Normalização = 0 para todos.\n");
        for (int i = 0; i < n; i++) printf("0.0 ");
        printf("\n");
        return 0;
    }

    printf("\nVetor normalizado:\n");
    for (int i = 0; i < n; i++) {
        float Xn = (float)(X[i] - min) / (max - min);
        printf("%.4f ", Xn);
    }

    printf("\n");
    return 0;
}
