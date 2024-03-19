#include <stdio.h>

int main(void)
{
    int number, size;
    float med = 0;

    printf("Digite a quantidade de números: ");
    scanf("%d", &size);
    int vector [size];

    printf("Digite seus numeros: ");
    for(int i =0; i< size; i++){
    scanf("%d", &number);
    vector [i] = number;
    med = med + number;
    }
    med = med/size;
    printf("Media = %f", med);
    }

