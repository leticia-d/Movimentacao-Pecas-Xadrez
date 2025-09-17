#include <stdio.h>

void movimentoTorre(int casas){
    if (casas > 0){
        printf ("Direita\n");
        movimentoTorre(casas-1);
    }
}

void movimentoBispo(int casas) {
    if (casas == 0) return; // caso base: parar

    // Loop aninhado
    int passoVertical = 0;
    while (passoVertical < 1) { // loop externo (vertical)
        for (int passoHorizontal = 0; passoHorizontal < 1; passoHorizontal++) { // loop interno (horizontal)
            printf("Cima, Direita\n");
        }
        passoVertical++;
    }
   
    // Chamada recursiva para reduzir as casas restantes
    movimentoBispo(casas - 1);
}

void movimentoRainha(int casas){
    if (casas > 0){
        printf ("Esquerda\n");
        movimentoRainha(casas-1);
    }
}


int main(){

    int t = 1; //variável para movimentação da torre
    int b = 1; //variável para movimentação do bispo
    int r = 1; //variável para movimentação da rainha
    int c1 = 1; //variável para movimentação do cavalo
    int movimentocompleto = 1; //movimento cavalo

    //Movimento Torre
    //5 casas para direita
    printf ("Movimento Torre:\n");
    movimentoTorre(5);

    //Movimento Bispo
    //5 casas para diagonal
    printf ("Movimento Bispo:\n");
    movimentoBispo(5);

    //Movimento Rainha
    //8 casas para esquerda
    printf ("Movimento Rainha:\n");
    movimentoRainha(8);
    printf ("\n");
    
    //Movimento Cavalo
    //Cavalo se move duas casas para cima e uma casa para a direita
    printf ("Movimento Cavalo:\n");
    for (int vertical = 0; vertical < 3; vertical++) {         // controla até 3 movimentos
        for (int horizontal = 0; horizontal < 2; horizontal++) { // controla até 2 movimentos
            if (vertical < 2 && horizontal == 0) {
                printf("Cima\n");      // primeiras 2 casas para cima
                continue;              // pula para próxima iteração do for interno
         }

            if (vertical == 2 && horizontal == 1) {
                printf("Direita\n");   // depois 1 casa para direita
                break;                 // sai do for interno
            }
        }
    }   

return 0;
    
}