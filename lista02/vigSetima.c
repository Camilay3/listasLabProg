#include <stdio.h>

int main() {
    int numDigitado, maior, menor;

    printf("Digite um numero: ");
    scanf("%d", &numDigitado);
    maior = menor = numDigitado;

    while (numDigitado >= 0 || numDigitado%2 != 0) {
        if (maior < numDigitado) maior = numDigitado;
        if (menor > numDigitado) menor = numDigitado;
        
        printf("Maior: %d\n", maior);
        printf("Menor: %d\n", menor);
        printf("A multiplicacao do maior pelo menor: %d\n", maior*menor);

        printf("Digite outro numero (Para sair, digite um numero par negativo): ");
        scanf("%d", &numDigitado);
    }

    return 0;
}
