#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int* arr, int size, int ascending){
    int i, j;
    for(i = 0; i < size - 1; i++){
        for(j = 0; j < size - i -1; j++){
            if(ascending ? arr[j] > arr[j + 1] : arr[j] < arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main(){
        int linenumber, columnnumber, option;
        
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
        /*printf("Matriz:");
        for(int l = 0; l < linenumber; l++){
            for(int k = 0; k < columnnumber; k++){
                printf(" %d", matriz[l][k]);
            }
            printf("\n");
        }*/
    printf("Ordem crescente ou decrescente?\n1.Crescente\n2.Decrescente\n");
     scanf("%d", &option);


    if(option == 1 || option == 2){
        bubbleSort((int*)matriz, linenumber * columnnumber, option == 1);

        printf("Matriz ordenada:\n");
        for(int i = 0; i < linenumber; i++){
            for(int j = 0; j < columnnumber; j++){
                printf("%d", matriz[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Valor invalido!\n");
        return 0;
    }
    return 0;
}