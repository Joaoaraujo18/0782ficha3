#include <stdio.h>

int main(){
    float numero;
    float numerosucessor;
    float numeroantecessor;
 
    printf("Diga um numero\n");
    scanf(" %f", &numero);
   
    numeroantecessor = numero - 1;
    numerosucessor = numero + 1;
   
    printf("O numero Antecessor e %f e o sucessor e %f", numeroantecessor, numerosucessor);

       return 0;
}