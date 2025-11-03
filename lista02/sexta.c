#include <stdio.h>

int main() {
    int op = 1;
    int confirma = 0, votosPaulo = 0, votosRenata = 0, votosNulosEBrancos = 0;

    while(op > 0) {
        printf("===================\n");
        printf("Candidatos:\n");
        printf("Paulo - 5\n");
        printf("Renata - 7\n");
        printf("Digite o numero do seu candidato: ");
        scanf("%d", &op);

        if(op < 0) {
            printf("Votacoes encerradas!\n");
            break;
        }
        switch (op) {
            case 5:
                printf("Gostaria de confirmar o Voto em paulo?([1] Sim)\n");
                scanf("%d", &confirma);
                if(confirma) votosPaulo++;
                break;
            case 7:
                printf("Gostaria de confirmar o Voto em Renata?([1] Sim)\n");
                scanf("%d", &confirma);
                if(confirma) votosRenata++;
                break;
            default:
                printf("Gostaria de confirmar o Voto nulo/branco?([1] Sim)\n");
                scanf("%d", &confirma);
                if(confirma) votosNulosEBrancos++;
                break;
        }
    }
    printf("Votos de Paulo: %d\n", votosPaulo);
    printf("Votos de Renata: %d\n", votosRenata);
    printf("Votos nulos e brancos: %d\n", votosNulosEBrancos);

    return 0;
}
