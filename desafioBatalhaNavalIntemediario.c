// Online C compiler to run C program online
#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.


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

    // navio na horizontal.
    for (int i = 2; i <= 2; i++)
    {
        for (int j = 3; j <= 5; j++)
        {
            tabuleiro[i][j] = 3;
        }
        
    }

    // navio na vertical.
    for (int i = 5; i <= 7; i++)
    {
        for (int j = 7; j <= 7; j++)
        {
            tabuleiro[i][j] = 3;
        }
        
    }

    // navios na diagonal.

    for (int i = 0; i < 10; i++){
        for ( int j = 0; j < 10; j++){
            if ((j == i + 3) && (j > 6 && j < 10)){
                tabuleiro[i][j] = 3;
            } 
        }

    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if ((j == i - 3 ) && ( j >=0 && j < 3)) {
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
