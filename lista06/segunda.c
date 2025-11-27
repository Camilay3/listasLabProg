#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void gerarVetor(double *v, int n);
double calcularErro(double *A, double *B, int n, double (*funcErro)(double*, double*, int));
double mse(double *A, double *B, int n);
double mae(double *A, double *B, int n);
void imprimirVetor(double *v, int n);

int main() {
    srand(time(NULL));

    int n;
    printf("Digite o tamanho N dos vetores: ");
    scanf("%d", &n);

    double *A = malloc(n * sizeof(double));
    double *B = malloc(n * sizeof(double));

    gerarVetor(A, n);
    gerarVetor(B, n);

    printf("\nVetor A:\n");
    imprimirVetor(A, n);

    printf("\nVetor B:\n");
    imprimirVetor(B, n);

    double erroMSE = calcularErro(A, B, n, mse);
    double erroMAE = calcularErro(A, B, n, mae);

    printf("\nMSE = %.6f", erroMSE);
    printf("\nMAE = %.6f\n", erroMAE);

    free(A);
    free(B);

    return 0;
}

void gerarVetor(double *v, int n) {
    for (int i = 0; i < n; i++) *(v + i) = rand() % 100;
}

double calcularErro(double *A, double *B, int n, double (*funcErro)(double*, double*, int)) {
    return funcErro(A, B, n);
}

double mse(double *A, double *B, int n) {
    double soma = 0.0;
    for (int i = 0; i < n; i++) {
        double dif = *(A + i) - *(B + i);
        soma += dif * dif;
    }
    return soma / n;
}

double mae(double *A, double *B, int n) {
    double soma = 0.0;
    for (int i = 0; i < n; i++) {
        double dif = fabs(*(A + i) - *(B + i));
        soma += dif;
    }
    return soma / n;
}

void imprimirVetor(double *v, int n) {
    for (int i = 0; i < n; i++) printf("%.2f ", *(v + i));
    printf("\n");
}
