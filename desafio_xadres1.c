#include <stdio.h>

int main(){

    int bispo, torre, dama = 8;

    for(torre = 0; torre < 5; torre++){
        printf("Torre: Direita.\n"); 
   }
   while (bispo < 5){
    printf("Bispo: Cima, Direita.\n");
    bispo++;
   }
   do {
    printf("Dama: Esquerda.\n");
    dama--;
   } while (dama > 0);
   
return 0;
}