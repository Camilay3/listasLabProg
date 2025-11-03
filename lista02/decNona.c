#include <stdio.h>

int main() {
    int limiteA, limiteB;
    float media = 0;

    printf("Digite o limite A: ");
    scanf("%d", &limiteA);
    printf("Digite o limite B: ");
    scanf("%d", &limiteB);

    if(limiteA > limiteB) {
        for (int i = limiteB; i <= limiteA; i++) { media += i; }
        media = media/(limiteA-limiteB+1);

    } else {
        for (int i = limiteA; i <= limiteB; i++) { media += i; }
        media = media/(limiteB-limiteA+1);
    }

    printf("Media: %f\n", media);
    return 0;
}
