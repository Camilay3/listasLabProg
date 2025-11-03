#include <stdio.h>

int main() {
    int limiteA, limiteB;

    printf("Digite o limite A: ");
    scanf("%d", &limiteA);
    printf("Digite o limite B: ");
    scanf("%d", &limiteB);

    if(limiteA > limiteB) {
        for (int i = limiteB; i <= limiteA; i++) {
            if(!(i%4)) printf("Quadrado do valor: %d\n", i*i);
        }
    } else {
        for (int i = limiteA; i <= limiteB; i++) {
            if(!(i%4)) printf("Quadrado do valor: %d\n", i*i);
        }
    }

    return 0;
}
