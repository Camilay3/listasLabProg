#include <stdio.h>

int main() {
    int primeiroNum, segundoNum, quartoNum, quintoNum, numDigitado;

    printf("Digite um numero: ");
    scanf("%d", &numDigitado);

    primeiroNum = numDigitado/10000;
    segundoNum = (numDigitado%10000)/1000;
    quartoNum = numDigitado%100/10;
    quintoNum = numDigitado%10;
    
    (primeiroNum == quintoNum && segundoNum == quartoNum) ? printf("O numero informado é palíndromo.\n") : printf("O numero informado não é palíndromo.\n");

    return 0;
}
