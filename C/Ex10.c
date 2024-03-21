#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int word_size, string_size;
    printf("Insira o tamanho da palavra: ");
    scanf("%d", &word_size);

    char word[word_size + 1];
    printf("Digite a palavra: ");
    scanf("%s", word);

    printf("Insira o tamanho da string: ");
    scanf("%d", &string_size);

    char string[string_size + 1];
    printf("Digite a string: ");
    scanf("%s", string);

    int count = 0;
    for (int i = 0; i <= string_size - word_size; i++) {
        int match = 1;
        for (int j = 0; j < word_size; j++) {
            if (string[i + j] != word[j]) {
                match = 0;
                break;
            }
        }
        if (match)
            count++;
    }

    printf("A palavra '%s' ocorre %d vezes na string.\n", word, count);

    return 0;
}
