#include <stdio.h>

int main(){
    int num1;
    int num2 = 0;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    while(!num2) {
        printf("Digite o segundo valor: ");
        scanf("%d", &num2);
    }

    printf("Resultado: %f\n", (float)num1/num2);
    return 0;
}
