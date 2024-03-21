#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Insira o tamanho da string: ");
    scanf("%d", &size);
    char string [size+1];

    printf("Digite a string: ");
    for(int j = 0; j < size; j++){
    scanf(" %c", &string[j]);
    }
    string[size] = '\0';

    printf("Ordem invertida: ");
    for(int i = size -1; i >= 0; i--){
        printf("%c", string[i]);
    }
    return 0;
}
