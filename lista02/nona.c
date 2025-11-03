#include <stdio.h>

int main() {
    int anterior = 0;
    int atual = 1;
    int proximo;

    for (int i = 1; i < 20; i++) {
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }
    printf("20º valor: %d\n", atual);
    
    return 0;
}
