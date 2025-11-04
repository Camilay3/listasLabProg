#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

void gerarVetor(int vetor[], int inicio, int fim, int tamanho);
void bubbleSort(int vetor[], int tamanho);
void selectionSort(int vetor[], int tamanho);
void imprimirVetor(int vetor[], int tamanho);

int main() {
    int vetor[TAM];
    int inicio, fim;

    printf("Qual começo do intervalo do vetor?: ");
    scanf("%d", &inicio);

    printf("Qual final do intervalo do vetor?: ");
    scanf("%d", &fim);

    gerarVetor(vetor, inicio, fim, TAM);

    printf("\nVetor gerado:\n");
    imprimirVetor(vetor, TAM);

    // Ordenação por Bubble Sort
    bubbleSort(vetor, TAM);
    printf("\n\nVetor ordenado com Bubble Sort:\n");
    imprimirVetor(vetor, TAM);

    // Gera novamente o vetor para não ficar já ordenado
    gerarVetor(vetor, inicio, fim, TAM);

    // Ordenação por Seleção
    selectionSort(vetor, TAM);
    printf("\n\nVetor ordenado com Selection Sort:\n");
    imprimirVetor(vetor, TAM);

    return 0;
}

void gerarVetor(int vetor[], int inicio, int fim, int tamanho) {
    srand(time(NULL));

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = inicio + rand() % (fim - inicio + 1);
    }
}

void bubbleSort(int vetor[], int tamanho) {
    int temp;
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int vetor[], int tamanho) {
    int min, temp;
    for (int i = 0; i < tamanho - 1; i++) {
        min = i;
        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[j] < vetor[min]) {
                min = j;
            }
        }
        temp = vetor[i];
        vetor[i] = vetor[min];
        vetor[min] = temp;
    }
}

void imprimirVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
}
