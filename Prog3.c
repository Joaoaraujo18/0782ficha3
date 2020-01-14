#include <stdio.h>

int main(){
    float dinheirototal = 500000.00;
    float primeiro;
    float segundo;
    float terceiro;
  
    primeiro = dinheirototal * 0.46;
    segundo = dinheirototal * 0.32;
    terceiro = dinheirototal - primeiro - segundo;
  
    printf("Primeiro recebe %f\n", primeiro);
    printf("O segundo recebe %f\n",segundo);
    printf("O terceiro recebe %f\n", terceiro);

    return 0;
    

}

    