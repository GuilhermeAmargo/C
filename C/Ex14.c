#include <stdio.h>
#include <stdlib.h>

int main()
{
    double base, altura, area;

    printf("Digite a base: \n");
    scanf("%lf", &base);
    printf("Digite a altura: \n");
    scanf("%lf", &altura);
    area = (base*altura)/2;
    printf("A area do triangulo e: %lf", area);

    return 0;
}
