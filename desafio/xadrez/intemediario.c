#include <stdio.h>

int main() {

    //movimentação do cavalo em L
    int mover_cavalo = 1;

    while( mover_cavalo--)
    {

    for (int i = 0; i < 2; i++)
    {
    
        printf("cima\n"); //mover cavalo duas vezes para cima
    }
        printf("direita\n");//mover cavalo duas vezes para direita

        
        for(int i = 0; i < 2; i++)
        {
            printf("baixo\n"); // imprimir a movimentação do cavalo para baixo duas vezes
            }
        printf("esquerda\n"); // imprimir a movimentação do cavalo para esquerda uma vez

        for(int i = 0; i  < 2; i++)
        {
            printf("cima\n");
        }
        printf("esquerda\n"); // imprimir a movimentação do cavalo para esquerda uma vez

        for(int i = 0; i < 2; i++)
        {
            printf("baixo\n");
        }
        printf("direita\n"); // imprimir a movimentação do cavalo para direita uma vez



    }
        





















    return 0;
}