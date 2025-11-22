#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void buscarCaractere(char *, char *);

int main(int argc, char const *argv[]) {
    if(argc != 3) {
        printf("Uso incorreto! Deve ser %s <string> <caractere>\n", *argv);
        exit(1);
    }

    char *string = (char *)argv[1];
    char caractere = argv[2][0];

    buscarCaractere(string, &caractere);
    return 0;
}

void buscarCaractere(char *texto, char *c) {
    int flag = 0;
    for (int i = 0; i < strlen(texto); i++) {
        if (*(texto+i) == *c) {
            printf("Caracter encontrado: %c\n", *c);
            flag = 1;
        }
    }
    if (!flag) printf("O caracter %c não faz parte da string\n", *c);
}
