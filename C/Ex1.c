#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    double soma = 0.0;
    printf("Digite o numero de elementos na lista: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Numero de elementos invalido.\n");
        return 1;
    }

    double *lista = (double *)malloc(n * sizeof(double));

    if (lista == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    printf("Digite os elementos da lista:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &lista[i]);
        soma += lista[i];
    }

    double media = soma / n;

    printf("A media dos elementos da lista e: %.2f\n", media);

    free(lista);

    return 0;
}
