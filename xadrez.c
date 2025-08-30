#include <stdio.h>

int main() {
    int opcao, casas, i, movimentoCompleto = 1;

    printf("=== Menu de Movimentos ===\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");
    printf("Escolha a peça que deseja movimentar: ");
    scanf("%d", &opcao);

    if (opcao != 4){
    printf("Digite o numero de casas que deseja mover: ");
    scanf("%d", &casas);
    }

    switch(opcao) {
        case 1:
            printf("\n--- Movimento da Torre ---\n");
            for(i = 0; i < casas; i++) {
                printf("Frente %d\n", i + 1);
            }
            break;

        case 2:
            printf("\n--- Movimento do Bispo ---\n");
            for(i = 0; i < casas; i++) {
                printf("Frente-Direita %d\n", i + 1);
            }
            break;

        case 3:
            printf("\n--- Movimento da Rainha ---\n");
            for(i = 0; i < casas; i++) {
                printf("esquerda %d\n", i + 1);
            }
            break;

        case 4:
            printf("\n--- Movimento do Cavalo ---\n");
            while (movimentoCompleto -- ){
                for(i = 0; i < 2; i++){
                    printf("Cima\n");
                }
                    printf("Direita\n");
            }
             break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
