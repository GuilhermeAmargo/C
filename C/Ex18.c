#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct {
    double h;
    double k;
    double r;
} Circulo;

Circulo extrair_parametros(char *equacao_circulo) {
    Circulo circulo;
    char *token;
    char *delimiters = "^()= ";
    token = strtok(equacao_circulo, delimiters);
    circulo.h = atof(token);
    token = strtok(NULL, delimiters);
    circulo.k = atof(token);
    token = strtok(NULL, delimiters);
    circulo.r = atof(token);
    return circulo;
}

double calcular_comprimento_circunferencia(double raio) {
    return 2 * 3.14 * raio;
}

int main() {
    char equacao_circulo[100];
    printf("Digite a equacao do circulo (no formato (x - h)^2 + (y - k)^2 = r^2): ");
    fgets(equacao_circulo, sizeof(equacao_circulo), stdin);
    equacao_circulo[strcspn(equacao_circulo, "\n")] = 0;
    Circulo circulo = extrair_parametros(equacao_circulo);
    double comprimento_circunferencia = calcular_comprimento_circunferencia(circulo.r);
    printf("Raio do circulo: %.2f\n", circulo.r);
    printf("Comprimento da circunferencia: %.2f\n", comprimento_circunferencia);
    return 0;
}

