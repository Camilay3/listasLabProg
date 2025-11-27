#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct FERRAMENTA {
    char *nome;
    float custo;
    int quantidade;
    int idRegistro;
};

#define ARQ "hardware.dat"
#define MAX 100
#define TAM_NOME 20

void inicializarArquivo();
void inserir();
void listar();
void atualizar();
void excluir();

int main() {
    int op;

    inicializarArquivo();
    void (*pFunc[])() = {inserir, listar, atualizar, excluir};
    
    do {
        printf("\n--- MENU ---\n");
        printf("1 - Inserir\n");
        printf("2 - Listar\n");
        printf("3 - Atualizar\n");
        printf("4 - Excluir\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &op);
        if(!op) break;
        pFunc[op-1]();
        
    } while(op != 0);

    return 0;
}

void inicializarArquivo() {
    FILE *fp = fopen(ARQ, "wb");
    if (!fp) return;

    char nome[TAM_NOME] = "";
    float c = 0;
    int q = 0, id = -1;

    for (int i = 0; i < MAX; i++) {
        fwrite(nome, TAM_NOME, 1, fp);
        fwrite(&c, sizeof(float), 1, fp);
        fwrite(&q, sizeof(int), 1, fp);
        fwrite(&id, sizeof(int), 1, fp);
    }
    fclose(fp);
}

void inserir() {
    FILE *fp = fopen(ARQ, "rb+");
    if (!fp) return;

    struct FERRAMENTA f;
    f.nome = malloc(TAM_NOME);

    int pos;
    printf("ID (0-99): ");
    scanf("%d", &pos);

    printf("Nome: ");
    scanf(" %19[^\n]", f.nome);

    printf("Quantidade: ");
    scanf("%d", &f.quantidade);

    printf("Custo: ");
    scanf("%f", &f.custo);

    f.idRegistro = pos;

    long offset = pos * (TAM_NOME + sizeof(float) + sizeof(int) + sizeof(int));
    fseek(fp, offset, SEEK_SET);

    char nomeArq[TAM_NOME];
    memset(nomeArq, 0, TAM_NOME);
    strcpy(nomeArq, f.nome);

    char *p = nomeArq;
    fwrite(p, TAM_NOME, 1, fp);
    fwrite(&f.custo, sizeof(float), 1, fp);
    fwrite(&f.quantidade, sizeof(int), 1, fp);
    fwrite(&f.idRegistro, sizeof(int), 1, fp);

    free(f.nome);
    fclose(fp);
}

void listar() {
    FILE *fp = fopen(ARQ, "rb");
    if (!fp) return;

    char nome[TAM_NOME];
    float custo;
    int qtd, id;

    for (int i = 0; i < MAX; i++) {
        long offset = i * (TAM_NOME + sizeof(float) + sizeof(int) + sizeof(int));
        fseek(fp, offset, SEEK_SET);

        fread(nome, TAM_NOME, 1, fp);
        fread(&custo, sizeof(float), 1, fp);
        fread(&qtd, sizeof(int), 1, fp);
        fread(&id, sizeof(int), 1, fp);

        if (id != -1) {
            printf("\nRegistro %d\n", i);
            printf("Nome: %s\n", nome);
            printf("Quantidade: %d\n", qtd);
            printf("Custo: %.2f\n", custo);
        }
    }
    fclose(fp);
}

void atualizar() {
    FILE *fp = fopen(ARQ, "rb+");
    if (!fp) return;

    int pos;
    printf("ID a atualizar: ");
    scanf("%d", &pos);

    struct FERRAMENTA f;
    f.nome = malloc(TAM_NOME);

    printf("Novo nome: ");
    scanf(" %19[^\n]", f.nome);

    printf("Nova quantidade: ");
    scanf("%d", &f.quantidade);

    printf("Novo custo: ");
    scanf("%f", &f.custo);

    f.idRegistro = pos;

    long offset = pos * (TAM_NOME + sizeof(float) + sizeof(int) + sizeof(int));
    fseek(fp, offset, SEEK_SET);

    char nomeArq[TAM_NOME];
    memset(nomeArq, 0, TAM_NOME);
    strcpy(nomeArq, f.nome);

    char *p = nomeArq;
    fwrite(p, TAM_NOME, 1, fp);
    fwrite(&f.custo, sizeof(float), 1, fp);
    fwrite(&f.quantidade, sizeof(int), 1, fp);
    fwrite(&f.idRegistro, sizeof(int), 1, fp);

    free(f.nome);
    fclose(fp);
}

void excluir() {
    FILE *fp = fopen(ARQ, "rb+");
    if (!fp) return;

    int pos;
    printf("ID a excluir: ");
    scanf("%d", &pos);

    char nome[TAM_NOME] = "";
    float c = 0;
    int q = 0, id = -1;

    long offset = pos * (TAM_NOME + sizeof(float) + sizeof(int) + sizeof(int));
    fseek(fp, offset, SEEK_SET);

    char *p = nome;
    fwrite(p, TAM_NOME, 1, fp);
    fwrite(&c, sizeof(float), 1, fp);
    fwrite(&q, sizeof(int), 1, fp);
    fwrite(&id, sizeof(int), 1, fp);

    fclose(fp);
}
