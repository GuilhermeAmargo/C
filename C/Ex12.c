#include <stdio.h>
#include <stdlib.h>

int main() {
    int first = 0, second = 1, n, next;

    printf("Digite um valor para gerar a sequencia de Fibonacci: ");
    scanf("%d", &n);

    printf("Sequencia de Fibonacci ate o %dº termo: ", n);

    if (n >= 1) {
        printf("%d ", first);
    }
    if (n >= 2) {
        printf("%d ", second);
    }

    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
    return 0;
}