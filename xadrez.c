#include <stdio.h>

int main(){

    int t = 1; //variável para movimentação da torre
    int b = 1; //variável para movimentação do bispo
    int r = 1; //variável para movimentação da rainha
    int c1 = 1; //variável para movimentação do cavalo
    int movimentocompleto = 1; //movimento cavalo

    //Movimento Torre
    //5 casas para direita
    printf ("Movimento Torre:\n");
    while (t<=5)
    {
        printf ("Direita\n");
        t++;
    }


    //Movimento Bispo
    //5 casas para diagonal
    printf ("Movimento Bispo:\n");
    do
    {
        printf ("Cima,Direita\n");
        b++;
    } while (b<=5);


    //Movimento Rainha
    //8 casas para esquerda
    printf ("Movimento Rainha:\n");
    for (r = 1; r <= 8; r++)
    {
        printf ("Esquerda\n");
    }
    printf ("\n");
    
    //Movimento Cavalo
    //Cavalo se move duas casas para baixo e uma casa para a esquerda
    printf ("Movimento Cavalo:\n");
    
    while (movimentocompleto -- )
    {
        for (int c1 = 0; c1 < 2; c1++)
        {
            printf ("Baixo\n"); //Imprime "baixo" 2x
        }
    printf ("Esquerda\n"); //Imprime "esquerda" 1x
    }

return 0;
    
}