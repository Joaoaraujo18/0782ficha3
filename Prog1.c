#include <stdio.h>

int main(){
    float fahrenheit;
    float celcius;
    float conversao;

    printf("Diga a temperatura em graus Fahrenheit\n");
    scanf(" %f", &fahrenheit);
    

    conversao =(fahrenheit - 32) / 1.8000;

    printf("Corresponde a %f graus celcius", conversao);

    return 0;
}
