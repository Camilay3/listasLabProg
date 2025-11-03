#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 80

int main() {
    char string1[TAM], string2[TAM];
    int i = 0, flag = 1;

    fgets(string1, TAM, stdin);
    fgets(string2, TAM, stdin);

    (!strcmp(string1, string2)) ? printf("Com strcmp, as strings são iguais.\n") : printf("Com strcmp, as strings não são iguais.\n");

    while(string1[i] != '\0' && string2[i] != '\0') {
        if(string1[i] != string2[i]) {
            flag = 0;
            break;
        }
        i++;
    }

    (flag) ? printf("Sem strcmp, as strings são iguais.\n") : printf("Sem strcmp, as strings não são iguais.\n");    
    return 0;
}
