#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double mse(const double *a, const double *b, size_t n) {
    if (!n) return 0.0; 

    const double *pa = a, *pb = b;
    double soma = 0.0;

    for (size_t i = 0; i < n; i++) {
        double diff = *pa - *pb;
        soma += diff * diff;
        pa++; pb++;
    }

    return soma / (double)n;
}

int main(void) {
    const size_t N = 8;
    double A[N], B[N];

    srand((unsigned) time(NULL));
    for (size_t i = 0; i < N; i++) {
        A[i] = (double)(rand() % 10);
        B[i] = (double)(rand() % 10);
    }

    printf("Vetor A: ");
    for (size_t i = 0; i < N; i++) printf("%.0f ", A[i]);
    printf("\n");

    printf("Vetor B: ");
    for (size_t i = 0; i < N; i++) printf("%.0f ", B[i]);
    printf("\n");

    double erro = mse(A, B, N);
    printf("\nErro Medio Quadratico (MSE) entre A e B: %.4f\n", erro);

    return 0;
}
