#include <stdio.h>

void trocar(int *, int *);

int main() {
    int primeiro, segundo;

    printf("Digite o primeiro valor: ");
    scanf("%d", &primeiro);
    printf("Digite o segundo valor: ");
    scanf("%d", &segundo);

    printf("Antes da troca: x = %d, y = %d\n", primeiro, segundo);
    trocar(&primeiro, &segundo);
    printf("Depois da troca: x = %d, y = %d\n", primeiro, segundo);

    return 0;
}

void trocar(int *x, int *y) {
    *x += *y;
    *y = *x - *y;
    *x -= *y;
}
