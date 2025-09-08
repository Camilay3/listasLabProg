#include <stdio.h>

int main() {
    int horasTrabalhadas;
    float valorHora, desconto, salarioLiquido, salarioBruto;

    // Leitura
    printf("Digite o valor da hora aula: ");
    scanf("%f", &valorHora);
    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%d", &horasTrabalhadas);
    printf("Digite o percentual de desconto do INSS: ");
    scanf("%f", &desconto);

    // Lógica
    salarioBruto = valorHora * horasTrabalhadas;
    salarioLiquido = salarioBruto - (salarioBruto * desconto/100);

    // Exibição
    printf("O salário bruto é: R$%.2f\n", salarioBruto);
    printf("O salário líquido é: R$%.2f\n", salarioLiquido);

    return 0;
}
