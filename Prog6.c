#include <stdio.h>

int main()
{
    int menu = 1;
    float num1;
    float num2;
    float contafinal;
  
    printf(".....Menu.....\n");
    printf("1- Multiplicação\n");
    printf("2- Divisão\n");
    printf("3- Adição\n");
    printf("4- Subtração\n");
 
    scanf(" %d", &menu);

    switch (menu)
    {
    case 1:
   
        printf("Diga o primeiro numero: \n");
        scanf(" %f", &num1);
        printf("Diga o segundo numero: \n");
        scanf(" %f", &num2);
       
        contafinal = num1 * num2;
        printf("O seu resultado foi %f\n", contafinal);
        break;
    case 2:
       
        printf("Diga o primeiro numero: \n");
        scanf(" %f", &num1);
        printf("Diga o segundo numero: \n");
        scanf(" %f", &num2);
      
        contafinal = num1 / num2;
        printf("O seu resultado foi %f\n", contafinal);
        break;
    case 3:
   
        printf("Diga o primeiro numero: \n");
        scanf(" %f", &num1);
        printf("Diga o segundo numero: \n");
        scanf(" %f", &num2);
       
        contafinal = num1 + num2;
        printf("O seu resultado foi %f", contafinal);
        break;
    case 4:
   
        printf("Diga o primeiro numero: \n");
        scanf(" %f", &num1);
        printf("Diga o segundo numero: \n");
        scanf(" %f", &num2);
      
        contafinal = num1 - num2;
        printf("O seu resultado foi %f\n", contafinal);
        break;

    default:
        break;

    return 0;
    }
}