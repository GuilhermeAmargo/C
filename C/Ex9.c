#include <stdio.h>

// Função para calcular a potência de um número
double power(double base, int exponent) {
    double result = 1.0;
    
    // Caso especial: se o expoente for 0, o resultado é 1
    if (exponent == 0)
        return 1.0;
    
    // Caso o expoente seja negativo
    if (exponent < 0) {
        base = 1.0 / base;
        exponent = -exponent;
    }
    
    // Calculando a potência usando um loop
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    
    return result;
}

int main() {
    double base;
    int exponent;

    // Solicita ao usuário a base e o expoente
    printf("Digite a base: ");
    scanf("%lf", &base);
    
    printf("Digite o expoente: ");
    scanf("%d", &exponent);
    
    // Chama a função power para calcular a potência
    double result = power(base, exponent);
    
    // Exibe o resultado
    printf("%.2lf^%d = %.2lf\n", base, exponent, result);
    
    return 0;
}
