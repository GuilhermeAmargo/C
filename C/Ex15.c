#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;

    printf("Insira um ano: ");
    scanf("%d", &ano);
    if(ano % 4 ==0){
        printf("%d e um ano bissexto", ano);
    } else {
        printf("%d nao e um ano bissexto", ano);
    }

    return 0;
}
