#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, sum = 0, digit;
    
    printf("Digite um numero inteiro: \n");
    scanf("%d", &number);
    
    while (number != 0) {
        digit = number % 10; 
        sum += digit; 
        number /= 10; 
    }
    
    printf("A soma dos digitos do numero inteiro fornecido e: %d\n", sum);
    
    return 0;
}
