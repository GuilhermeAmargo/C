#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    char word[30], copy[30];
    int i, size, equal = 0;

    printf("Digite uma palavra: ");
    scanf("%s", word);

    size = strlen(word);
    for(i = 0; i < strlen(word); i++){
        copy[i] = word [size -1];
        size --;
    }
    copy[i] = '\0';
    size = strlen (word);

    printf("Original: %s\nCopia: %s\n", word, copy);

    for(i = 0; i < size; i++){
        if(word[i] == copy[i])
        equal++;

    }

    if(size == equal)
        printf("Palindromo");
    else
    printf("Nao palindromo");
    }
