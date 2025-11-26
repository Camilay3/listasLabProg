#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NOTA_MAX 10

struct ALUNO { float *pNotas, media; };

void *alocarMemoria(unsigned, size_t);
void preencherNotas(struct ALUNO *const, unsigned char);
void imprimirNotas(struct ALUNO *const, unsigned char);
void calcularMedia(struct ALUNO *const, unsigned char);

int main(int argc, char const *argv[]) {
    srand(time(NULL));

    if(argc != 3) {
        printf("Use \n\t\t %s <Quantidade de alunos> <Quantidade de notas por aluno>\n\n", *argv);
        exit(1);
    }

    int tamanho = atoi(argv[1]);
    unsigned char qntNotas = atoi(argv[2]);
    struct ALUNO *alunos;

    if(!( alunos = alocarMemoria(tamanho, sizeof(struct ALUNO)) )) {
        printf("Memória indisponível!");
        exit(2);
    };

    for(int i=0; i < tamanho; i++) {
        if(! ((alunos+i)->pNotas = alocarMemoria(qntNotas, sizeof(float)) )) {
            printf("Memória indisponível!");
            exit(3);
        };
        printf("\n------------=------------\n");
        printf("\t[ Aluno %d ]\n", i+1);
        preencherNotas((alunos+i), qntNotas);
        imprimirNotas((alunos+i), qntNotas);
        calcularMedia((alunos+i), qntNotas);
    }
    
    printf("\n");
    return 0;
}

void *alocarMemoria(unsigned t, size_t size) {
    return malloc(t * size);
}

void preencherNotas(struct ALUNO *const px, unsigned char q) {
    for(int i = 0; i < q; i++) px->pNotas[i] = rand() % NOTA_MAX;
}

void imprimirNotas(struct ALUNO *const px, unsigned char q) {
    for(int i = 0; i < q; i++) printf("Nota %d: %.1f\n", i+1, px->pNotas[i]);
}

void calcularMedia(struct ALUNO *const px, unsigned char q) {
    printf("Média das notas: ");
    px->media = 0;
    for(int i = 0; i < q; i++) px->media += px->pNotas[i];
    px->media /= q; 
    printf("%.1f\n", px->media);
}
