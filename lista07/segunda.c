#include <stdio.h>
#include <stdlib.h>

struct ESTOQUE {
    char *nomePeca;
    int idPeca;
    int idPedido;
    float valor;
};

int main(int argc, char const *argv[]) {
    if(argc != 5) {
        printf("Use \n\t %s <Nome da peça> <Número da peça> <Número do pedido> <Preço da peça>\n\n", *argv);
        exit(1);
    }
    struct ESTOQUE produto;

    produto.nomePeca = (char *)argv[1];
    produto.idPeca = atoi(argv[2]);
    produto.idPedido = atoi(argv[3]);
    produto.valor = atof(argv[4]);
    
    printf("\n\t DADOS DO PRODUTO\n");
    printf("Nome da peça: %s\n", produto.nomePeca);
    printf("ID da peça: %d\n", produto.idPeca);
    printf("ID do pedido: %d\n", produto.idPedido);
    printf("Preço: %.2f\n", produto.valor);

    return 0;
}
