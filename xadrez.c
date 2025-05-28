#include <stdio.h>

int main() {
    // jogo xadrex usando for(Torre), while(Bispo), do while(Rainha)
    // movimentação das peças
    // Torre para cima, Bispo para cima e direita, Rainha para esquerda
    int Torre = 3;
    int Bispo = 2;
    int Rainha = 8;

    
    //Mover Torre 3 casas para cima
    printf("Torre\n");
    for (int T = 2; T < 5; T++)
    { printf("Para cima\n"); }

    //Mover Bispo duas casas para cima e para a direita
    printf("Bispo\n");

while (Bispo < 5)
{  printf("Para cima e para direita\n");
    Bispo++; }

//Mover Rainha 8 casas para a esqwerda
printf("Rainha\n");
do {
    printf("Para esquerda\n");
    Rainha++;
 } while (Rainha < 16);

 return 0;


}
     
