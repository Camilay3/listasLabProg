#include <stdio.h>

int main() {
    unsigned long int soma = 0;
    unsigned long int aux = 1;

    for (int i = 1; i < 64; i++) {
        soma += aux;
        aux *= 2;
    }

    printf("resultado: %ld\n", soma);
    return 0;
}
