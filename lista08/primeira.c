#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 
CSV: É um formato simples para guardar tabelas. Cada linha é um registro. Cada coluna é um campo, e os campos são separados por vírgula. Exemplo:
    nome,idade,email
    Ana,20,ana@email.com
    João,35,joao@email.com
*/

struct USUARIO {
    char nome[20];
    char email[10];
    int idade;
};

int main() {
    int qntUsuarios;

    printf("Quantos usuarios deseja cadastrar? ");
    scanf("%d", &qntUsuarios);
    getchar();

    struct USUARIO *lista = malloc(qntUsuarios * sizeof(struct USUARIO));
    if (lista == NULL) {
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }

    // Leitura dos usuários
    for (int i = 0; i < qntUsuarios; i++) {
        printf("\n\t Usuario %d\n", i+1);
        printf("Nome: ");
        fgets(lista[i].nome, 20, stdin);
        lista[i].nome[strcspn(lista[i].nome, "\n")] = 0; // remover o \n do fgets

        printf("Idade: ");
        scanf("%d", &lista[i].idade);
        getchar();

        printf("Email: ");
        fgets(lista[i].email, 10, stdin);
        lista[i].email[strcspn(lista[i].email, "\n")] = 0;
    }

    FILE *arq = fopen("usuarios.csv", "w");
    if (arq == NULL) {
        printf("Erro ao abrir arquivo.\n");
        exit(2);
    }

    fprintf(arq, "nome,idade,email\n");
    for (int i = 0; i < qntUsuarios; i++) {
        fprintf(arq, "%s,%d,%s\n", lista[i].nome, lista[i].idade, lista[i].email);
    }
    fclose(arq);
    free(lista);
    printf("\nArquivo 'usuarios.csv' gravado com sucesso!\n");

    return 0;
}
