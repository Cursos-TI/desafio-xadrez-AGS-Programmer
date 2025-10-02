#include <stdio.h>

int main () {

    int bispo = 1, torre, rainha = 1;

    //Mover a torre 5 casas para a direita:
    printf("## Torre ##\n"); //Peça que irá se mover.
    for(int torre = 0; torre < 5; torre++) {
        printf("Direita\n"); //Imprime a direção do movimento da peça.
    }

    printf("\n");

    //Mover a rainha 8 casas para a esquerda:
    printf("## Rainha ##\n"); //Peça que irá se mover.
    while(rainha <= 8) {
        printf("Esquerda\n"); //Imprime a direção do movimento da peça.
        rainha++;
    }

    printf("\n");

    //Mover o bispo 5 casas na diagonal para cima e à direita:
    printf("## Bispo ##\n"); //Peça que irá se mover.
    do {
        printf("Cima, Direita\n"); //Imprime a direção do movimento da peça.
        bispo++;
    } while (bispo <= 5);

    return 0;
}