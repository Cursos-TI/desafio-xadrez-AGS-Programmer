#include <stdio.h>

//Utilizando a técnica de recursividade para simular as movimentações de peças do xadrez.
 
void moverTorre(int casas) {
    if(casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverRainha(int casas) {
    if(casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

void moverBispo(int casas) {
    if(casas > 0) {

        //Loop externo: Movimento diagonal para cima
        for(int cima = 0; cima < 1; cima++) {
            printf("Cima, ");

            //Loop Interno: Movimento para a direita
            for (int direita = 0; direita < 1; direita++) { 
                printf("Direita\n");
             }
        }
        moverBispo(casas -1);
    }
}

int main () {

    printf("## Desafio Xadrez ##\n");
    printf("\n");

    //Mover a torre 5 casas para a direita:
    printf("Movimento da Torre: \n");
    moverTorre(5);
    printf("\n");

    //Mover a rainha 8 casas para a esquerda:
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    //Mover o bispo 5 casas na diagonal para cima e à direita:
    printf("Movimento do Bispo: \n");
    moverBispo(5);
    printf("\n");

    //Mover o cavalo 2 casas para cima e 1 para a direita:
    printf("Movimento do Cavalo: \n");
    for(int moverCavalo = 2; moverCavalo > 0; moverCavalo--) { //Loop externo: Movimento para cima
        printf("Cima\n");

        for(int direcao = 1; direcao <= 1; direcao++) { //Loop interno: Movimento para a direita
            if(moverCavalo == 1 && direcao == 1) {
                printf("Direita\n");
                break;
            }
        }  
    }

    return 0;
}