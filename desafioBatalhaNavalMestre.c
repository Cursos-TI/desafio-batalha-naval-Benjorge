// Online C compiler to run C program online
#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
   


    char linha[] = {'A','B','C','D','E','F','G','H','I','J'};
    int coluna[] = {1,2,3,4,5,6,7,8,9,10};
   
    int tabuleiro[10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    
    };

    // Incluindo Cone.
  
    for (int i = 0; i < 10; i++){
        
        for (int j = 0; j < 10; j++){

            if(i == 0 && j == 2){

                tabuleiro[i][j] = 3;

            } else if ( i == 1 && j >= 1 && j <= 3){

                tabuleiro[i][j] = 3;

            }else if (i == 2 && j >= 0 && j <= 4){

                tabuleiro[i][j] = 3;

            }
        }
    }

    // Incluindo Cruz.
  
    for (int i = 0; i < 10; i++){
        
        for (int j = 0; j < 10; j++){

            if(i == 4 && j == 1){

                tabuleiro[i][j] = 3;

            } else if ( i == 5 && j >= 0 && j <= 2){

                tabuleiro[i][j] = 3;

            }else if (i == 6 && j == 1){

                tabuleiro[i][j] = 3;

            } else if ( i == 7 && j == 1){

                tabuleiro[i][j] = 3;

            }
        }
    }

    // Incluindo Octaedro.
  
    for (int i = 0; i < 10; i++){
        
        for (int j = 0; j < 10; j++){

            if(i == 4 && j == 7){

                tabuleiro[i][j] = 3;

            } else if ( i == 5 && j >= 6 && j <= 8){

                tabuleiro[i][j] = 3;

            }else if (i == 6 && j == 7){

                tabuleiro[i][j] = 3;

            } 
        }
    }

   
    
    

    printf("  ***TABULEIRO BATALHA NAVAL***\n");
    printf("    ");
    for (int i = 0; i < 1; i++)
    {
       for(int j = 0; j < 10; j++){
        printf(" %c ", linha[j]);
       }
        printf("\n");
    }
    
    for (int i = 0; i < 10; i++)
    {
        if(i < 9){
        printf(" %d  ", coluna[i]);
        } else {
            printf(" %d ", coluna[i]);
        };
        
       for (int j = 0; j < 10; j++)
       {
        printf(" %d ", tabuleiro[i][j]);
       }
       printf("\n");
       
    }   

   
    

    return 0;
}
