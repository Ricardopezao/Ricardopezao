#include <stdio>


   //desafio mestre jogo xadrez
   // movimentação das peças do xadrez 
   //bispo diagonal esquerda 5 casas
   //torre direita 5 casas
   //rainha esquerda 8 casas
   //cavalo duas casas para cima e uma para direita
    void Mover(int bispo,int torre,int rainha,int cavalo){
    }

         int main() {

    printf("|Bispo|\n");
    for(int i = 0; i < 5; i++) {
        printf("diagonal_esquerda\n");
    }

    printf("|Torre|\n");

    for(int i = 0; i < 5; i++) {
        printf("direita\n");
    }

    printf("|Rainha|\n");
    for(int i = 0; i < 8; i++) {
        printf("esquerda\n");
    }

    printf("|Cavalo|\n");
    for (int j = 1; j < 2; j++)
    {
        printf("direita\n");
    
 
    for(int i = 0; i < 2; i++) {
        printf("cima\n");
    }
    }


   
    return 0;
}