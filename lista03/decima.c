#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3
#define RN 20

int main() {
    srand(time(NULL));
    int matriz[TAM][TAM], num, contador = 0;

    printf("Digite um numero a ser contado na matriz: ");
    scanf("%d", &num);

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) matriz[i][j] = rand()%RN;
    }

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) printf("%d\t", matriz[i][j]);
        printf("\n");
    }

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if(matriz[i][j] == num) contador++;
        }
    }
    
    printf("O numero %d aparece %d vezes.\n", num, contador);
    return 0;
}
