#include <stdio.h>

double power(double base, int exponent) {
    double result = 1.0;
    
    if (exponent == 0)
        return 1.0;
    
    if (exponent < 0) {
        base = 1.0 / base;
        exponent = -exponent;
    }
    
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    
    return result;
}

int main() {
    double base;
    int exponent;

    printf("Digite a base: ");
    scanf("%lf", &base);
    
    printf("Digite o expoente: ");
    scanf("%d", &exponent);
    
    double result = power(base, exponent);
    
    printf("%.2lf^%d = %.2lf\n", base, exponent, result);
    
    return 0;
}
