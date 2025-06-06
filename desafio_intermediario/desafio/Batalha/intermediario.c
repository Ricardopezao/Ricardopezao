#include <stdio.h>

int main() {

     // criar um tabuleiro de batalha naval 10x10
    // com letras de A a J e numeros de 1 a 10
    // o tabuleiro deve ser exibido com as letras e numeros
    // e deve ser preenchido com ~ (agua) ou 3 (navio)

    // simulando agua
    int i = 10;
    int j = 10;
    // letras de A a J
    char letras [10] = {'A','B','C','D','E','F','G','H','I','J'};
    // numeros de 1 a 10
    int numeros[10] = {1,2,3,4,5,6,7,8,9,10};
    // Navios representados por 3
    int navio = 8;
    // exibir o tabuleiro de batalha naval
    // com letras e numeros
    printf("     Tabuleiro  Batalha Naval \n");
    // exibir letras de A a J
    printf("\n");
   for (int i = 0; i < 10; i++) {
        printf("  %c", letras[i]);
        printf("");
    }
    printf("\n");

    //exibir numeros de 1 a 10
    for (int i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);

        // exibir ~ (agua) ou 3 (navio)
        for (int j = 0; j < 10; j++) {
            if (i == 0 && j == 0) {
                printf(" ~ ");

                //navios na horizontal
            } else if (i == 3 && j == 1) {
                printf(" %d ", navio);

            } else if (i == 3 && j == 2) {
                printf(" %d ", navio);

                //navios na vertical
               }   else if(j == 7 && i == 8) {
                    printf(" %d ", navio);
                }   
                else if (i == 7 && j == 7) {
                    printf(" %d ", navio);
                    
            //posicionar navios na diagonal direita  
            }  else if (i == 1 && j == 7 ) {
                printf("%d",navio);

            } else if (i == 2 && j ==8 ) {
                printf("%d",navio);

                //posicionar navios na diagonal esquerda
            }else if (i == 5 && j == 4) {
                printf("%d",navio);

            }else if (i == 6 && j == 3) {
                printf("%d",navio);

            }
                 else {
                printf(" ~ ");
            }
        }
        printf("\n");
    }
   
        return 0;
      }