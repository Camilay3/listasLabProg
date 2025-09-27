#include <stdio.h>

int main() {
    unsigned char altPedro = 110, altJose = 150, anos = 0;

    // Lógica
    while (altPedro <= altJose) {
        altPedro+=3;
        altJose+=2;
        anos++;
    }

    // Exibição
    printf("O Pedro será maior que José em %hhu anos\n", anos);

    return 0;
}
