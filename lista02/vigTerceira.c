#include <stdio.h>

int main() {
    int teste = 1, contador = 0;
    if(teste == ++contador) printf("No pré incremento ele incrementa antes e depois compara.\n");
    
    teste = 0;
    contador = 0;

    if(teste == contador++) printf("No pós incremento ele compara e depois incrementa, retornando falso pro if\n");
    return 0;
}
