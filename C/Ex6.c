#include <stdio.h>
#include <stdlib.h>

double fatorial (int n);

int main()
{
    int number;
    double f;

    printf("Digite o numero para calcular o fatorial: ");
    scanf("%d", &number);

    f = fatorial (number);

    printf("Fatorial de %d = %0.1f",number,f);

    return 0;
}

double fatorial (int n){
    double vfat;
    if(n <= 1)
    return (1);
else
vfat = n * fatorial (n - 1);
return (vfat);
}

