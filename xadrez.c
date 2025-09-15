#include <stdio.h>

int main(){

    int t = 1; //variável para movimentação da torre
    int b = 1; //variável para movimentação do bispo
    int r = 1; //variável para movimentação da rainha

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

return 0;
    
}