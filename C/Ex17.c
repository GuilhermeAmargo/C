#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    double a, b, c, x1, x2, x, delta;

    printf("Digite os coeficientes da equacao do segundo grau (ax^2 + bx + c = 0): \n");
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);

    delta = b * b - 4 * a *c;

    if (delta > 0){
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
    printf("As raizes sao %lf e %lf", x1,x2);
    }
    else if (delta==0){
        x = -b / (2*a);
        printf("A raiz dupla e: %lf", x);
    } else {
        printf("A equacao nao possui raizes");
    }
    return 0;
}
