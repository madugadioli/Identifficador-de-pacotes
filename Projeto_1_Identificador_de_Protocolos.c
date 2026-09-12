#include <stdio.h>

int main() {

    int quantidade;
    int protocolo;
    int i;

    printf("====================================\n");
    printf("   IDENTIFICADOR DE PROTOCOLOS\n");
    printf("====================================\n");

    printf("Quantos pacotes deseja analisar? ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("\nQuantidade invalida!\n");
        printf("O programa foi encerrado.\n");
    }
    else {

        for (i = 1; i <= quantidade; i++) {

            printf("\n------------------------------------\n");
            printf("Pacote %d\n", i);
            printf("------------------------------------\n");

            printf("Protocolo: ");
            scanf("%d", &protocolo);

            if (protocolo == 1) {
                printf("TCP\n");
            }
            else if (protocolo == 2) {
                printf("UDP\n");
            }
            else if (protocolo == 3) {
                printf("ICMP\n");
            }
            else {
                printf("Protocolo desconhecido\n");
            }
        }

        printf("\n====================================\n");
        printf("       ANALISE FINALIZADA!\n");
        printf("====================================\n");
    }

    return 0;
}
