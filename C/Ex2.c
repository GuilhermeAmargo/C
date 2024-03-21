#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linenumber, columnnumber;
    
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linenumber);
    printf("Digite o numero de colunas: ");
    scanf("%d", &columnnumber);

    int matriz [linenumber][columnnumber];

    printf("Digite os elementos da matriz: ");
    for (int i = 0; i < linenumber; i++){
        for (int j = 0; j < columnnumber; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    int bigger= matriz[0][0];

        for (int k =0; k < linenumber; k++){
            for ( int l = 0; l < columnnumber; l++){
                if(matriz[k][l] > bigger){
                    bigger = matriz[k][l];
                }
            }   
        }
    printf("O maior elemento é %d", bigger);
    return 0;
}