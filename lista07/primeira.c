#include <stdio.h>
#include <stdlib.h>

#define NOTA_MAX 10

struct ALUNO { float *pNotas, media; };

float *alocarMemoria(unsigned);
void preencherNotas(struct ALUNO *const, unsigned char);
void imprimirNotas(struct ALUNO *const, unsigned char);

int main(int argc, char const *argv[]) {
    printf("\n");

    if(argc != 2) {
        printf("\nUse \n\t\t %s <Quantidade de notas>\n\n", *argv);
        exit(1);
    }

    struct ALUNO Camila;
    unsigned char tamanho = atoi(argv[1]);

    if(!(Camila.pNotas = alocarMemoria(tamanho))) {
        printf("Memória indisponível!");
        exit(2);
    };

    preencherNotas(&Camila, tamanho);
    imprimirNotas(&Camila, tamanho);
    
    printf("\n");
    return 0;
}

float *alocarMemoria(unsigned t) {
    return malloc(t * sizeof(float));
}

void preencherNotas(struct ALUNO *const px, unsigned char q) {
    for(int i = 0; i < q; i++) {
        px->pNotas[i] = rand() % NOTA_MAX;
    }
}

void imprimirNotas(struct ALUNO *const px, unsigned char q) {
    for(int i = 0; i < q; i++) {
        printf("Nota %d: %.1f\n", i+1, px->pNotas[i]);
    }
}
