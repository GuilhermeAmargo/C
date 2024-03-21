#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countWords(char *str) {
    int count = 0;
    int inside_word = 0; 

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\r' && !inside_word) {
            count++;
            inside_word = 1;
        }
        else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r') {
            inside_word = 0;
        }
    }

    return count;
}

int main() {
    int string_size;
    printf("Insira o tamanho da string: ");
    scanf("%d", &string_size);

    char string[string_size + 1];
    printf("Digite a string: ");
    scanf(" %[^\n]s", string); 

    int words = countWords(string);
    printf("O numero de palavras na string e: %d\n", words);

    return 0;
}
