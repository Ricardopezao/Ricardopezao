#include <stdio.h>

int main () {

    //criar um tabuleiro de batalha naval
    //com letras de A-j e numeros de 1-10
    // exibir tabuleiro com (~) para agua , e (3) para navio
    
    int i = 10;
    int j = 10;
    char letras [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int numeros [10] = {1,2,3,4,5,6,7,8,9,10};
    int navio = 8;

    //nome do jogo
    printf("**Batalha Naval**");
    printf(" \n");

    //exibir letras de A-J 
    for(int X = 0; X < 10; X++) {
        printf("  %c",letras [X]);
        printf("");
    }
        printf("\n");

        //exibir numeros de 1-10
        for(int y = 0; y < 10; y++) {
            printf("%d",numeros[y]);
        

        //exibir agua
        for(int i = 0; i < 10; i++) {
            if(i == 0 && j == 0 ) {
                printf(" ~ ");

         //navio na horizontal
            } else if(i == 3 && j == 1) {
                printf("%d", navio);

            } else if (j == 3 && j == 2) {
                printf("%d",navio);

                //navio na vertical
            } else if(j == 7 && i == 6) {
                printf("%d",navio);

            } else if(j == 7 && i == 7) {
                printf("%d",navio);

            } else {
                printf(" ~ ");
            }
        }
        printf("\n");
        }





        
    


































































    return 0;
}