#include <stdio.h>

struct PROFESSOR { 
    char nome[20]; 
};

struct DISCIPLINA {
    char nome[20];
    struct PROFESSOR prof;
};

int main() {
    struct DISCIPLINA d;

    printf("Nome da disciplina: ");
    fgets(d.nome, 20, stdin);

    printf("Nome do professor: ");
    fgets(d.prof.nome, 20, stdin);

    printf("\nDisciplina: %s", d.nome);
    printf("Professor: %s", d.prof.nome);

    return 0;
}
