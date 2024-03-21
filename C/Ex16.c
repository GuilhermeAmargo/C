#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    double raio, altura, volume;

    printf("Digite o raio: \n");
    scanf("%lf", &raio);
    printf("Digite a altura: \n");
    scanf("%lf", &altura);
    volume = 3.14*(raio*raio)*altura;
    printf("O volume do cilindro e: %lf", volume);
    return 0;
}
