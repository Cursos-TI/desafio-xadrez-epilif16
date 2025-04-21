#include <stdio.h>

void cavalo(int casas){ // função recursiva do movimento das peças
    for (int L = 0; L < 2; L++){ // loops avançados
        printf("Cavalo: Cima\n");}
            printf("Cavalo: Direita\n");}

void torre(int casas){
    if (casas > 0){
        printf("Torre: Direita.\n");
        torre(casas - 1);}
    }

void bispo(int casas){
    if (casas > 0){
        printf("Bispo: Cima, Direita.\n");
        bispo(casas - 1);}
    }
    void dama(int casas){
        if (casas > 0){
            printf("Dama: Esquerda.\n");
            dama(casas - 1);
        }

}

int main (){

    printf("***DESAFIO XADREZ***\n");

    // recursão dos movimentos das peças 
    cavalo(2);
    
    torre(5); 
    
    bispo(5);  
    
    dama(8);
   

    return 0;}
              

