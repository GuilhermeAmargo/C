#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, fahrenheit; 
    int choice;

    printf("Escolha o tipo de conversão:\n1.Celsius > Fahrenheit\n2.Fahrenheit > Celsius\n");
    scanf("%d", &choice);

    if (choice == 1){
        printf("Celsius > Fahrenheit\n");
        printf("Digite o valor em Celsius: \n");
        scanf("%f", &celsius);
        fahrenheit = 1.8*celsius+32;
        printf("Valor em Fahrenheit: %f", fahrenheit);
    }
    if (choice == 2){
        printf("Fahrenheit > Celsius\n");
        printf("Digite o valor em Fahrenheit: \n");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32)/1.8;
        printf("Valor em Celsius: %f", celsius);
    }
    return 0;
}
