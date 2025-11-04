#include <stdio.h>

int main() {
    int numero = 0, menor = 0, cont = 0, *x = &numero, *pM = &menor;

    while(*x >= 0) {
        printf("Digite um número (Menor que 0 para sair): ");
        scanf("%d", x);
        
        if(!cont) *pM = *x;
        if(*pM > *x) *pM = *x;
        printf("O menor número é %d\n", *pM);
        cont++;
    }
    printf("\nPrograma encerrado!\n");

    return 0;
}
