#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include <math.h>
int main()
{
    int number;
    bool primo;
     

    printf("Digite um numero: ");
    scanf("%d", &number);
    primo = true;

    if (number <= 1){
        primo = false;
    } else {
        primo = true;
        for(int i = 2; i < sqrt(number); i++){
            if(number % i == 0){
                primo = false;
                break;
            }
        }
    }
    if(primo == true){
        printf("Esse e um numero primo");
    }
    else {
        printf("Esse nao e um numero primo");
    }
    return 0;
}