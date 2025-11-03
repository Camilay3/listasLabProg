#include <stdio.h>
#define TAM 9

void retornaBinario(int num) {
    int vetAux[TAM], vetBinario[TAM], j = 0;

    for (int i = 0; i < TAM; i++) vetAux[i] = vetBinario[i] = 0;
    
    for(int i = 0; num >= 1; i++) {
        vetAux[i] = (num%2);
        num /= 2;
    }
    
    for (int i = TAM-1; i >= 0; i--) {
        vetBinario[j] = vetAux[i];
        j++;
    }
    
    for (int i = 0; i < TAM; i++) printf("%d", vetBinario[i]);    
}

int main() {
    for (int i = 1; i <= 256; i++) {
        printf("Decimal: %d", i);
        printf(" - Binario: ");
        retornaBinario(i);
        printf(" - Hexadecimal: %x", i);
        printf(" - Octal: %o\n", i);
    }

    return 0;
}
