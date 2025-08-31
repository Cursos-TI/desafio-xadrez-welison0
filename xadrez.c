#include <stdio.h>

void moverPeao(int casas){        //nova variavel adicionada (void)
    if(casas > 0){                //nono modelo de loop de repetição
        printf("Frente\n");
        moverPeao(casas -1);
    }
}

void moverTorre(int casas){
    if(casas > 0){
        printf("direita\n");
        moverTorre(casas -1);
    }
}

void moverBispo(int casas){
    if(casas > 0) {
        printf("Direita\n");
        printf("Cima\n");
        moverBispo(casas -1);
    }
}

void moverRainha(int casas){
    if(casas > 0){
        printf("Esquerda\n");
        moverRainha(casas -1);
    }
}

void moverCavalo(int casas){
    if(casas > 0){
        printf("Cima\n");
        printf("Cima\n");
        printf("Direita\n");
        moverCavalo(casas -1);
    }
}

//função repetir menu
void aguardarEnter(){
    printf("\nPressione Enter para voltar ao menu...\n");
    getchar(); //capturar enter sacnf
    getchar(); //capturar enter  do usuario
}

int main() {
    int opcao;

do{
    printf("=== Menu de Movimentos ===\n");
    printf("1 - Peão\n");
    printf("2 - Torre\n");
    printf("3 - Bispo\n");
    printf("4 - Rainha\n");
    printf("5 - Cavalo\n");
    printf("0 - Sair\n");
    printf("Escolha a peça que deseja movimentar: ");
    scanf("%d", &opcao);

    
    switch(opcao) {

        case 1:
            printf("\n--- Movimento do Peão ---\n");
            moverPeao(1);
            break;

        case 2:
            printf("\n--- Movimento da Torre ---\n");
            moverTorre(5);
            break;

        case 3:
            printf("\n--- Movimento do Bispo ---\n");
            moverBispo(5);
            break;

        case 4:
            printf("\n--- Movimento da Rainha ---\n");
            moverRainha(8);
            break;

        case 5:
            printf("\n--- Movimento do Cavalo ---\n");
            moverCavalo(1);
             break;

        case 0:
        printf("saindo do Programa...\n");
        break;

        default:
            printf("Opcao invalida!\n");
            break;
    }
}      while  (opcao != 0); //repete menu ate a escolha "0"
    return 0;
}
