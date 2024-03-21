#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    double area, lado;
    printf("Digite o lado do cubo: ");
    scanf("%lf", &lado);
    area = 6 * (lado*lado);
    printf("A area do cubo e: %lf", area);
    return 0;
}
