#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, sum = 0, digit;
    
    printf("Digite um numero inteiro: \n");
    scanf("%d", &number);
    
    // Calculando a soma dos dígitos
    while (number != 0) {
        digit = number % 10; // Obtém o último dígito
        sum += digit; // Adiciona o dígito à soma
        number /= 10; // Remove o último dígito
    }
    
    printf("A soma dos digitos do numero inteiro fornecido eh: %d\n", sum);
    
    return 0;
}
