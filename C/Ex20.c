#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Ponto;

Ponto calcular_ponto_intersecao(double m, double c, double h, double k, double r) {
    Ponto ponto;

    double A = 1 + m * m;
    double B = 2 * (m * c - m * k - h);
    double C = h * h + k * k + c * c - r * r - 2 * c * k;

    double delta = B * B - 4 * A * C;

    if (delta < 0) {
        ponto.x = NAN;
        ponto.y = NAN;
    } else {
        ponto.x = (-B + sqrt(delta)) / (2 * A);
        ponto.y = m * ponto.x + c;
    }

    return ponto;
}

int main() {
    double m, c; 
    double h, k, r; 
    Ponto ponto_intersecao;

    printf("Digite os coeficientes da equacao da reta (y = mx + c): ");
    scanf("%lf %lf", &m, &c);

    printf("Digite as coordenadas do centro do circulo (h k): ");
    scanf("%lf %lf", &h, &k);

    printf("Digite o raio do circulo: ");
    scanf("%lf", &r);

    ponto_intersecao = calcular_ponto_intersecao(m, c, h, k, r);

    if (!isnan(ponto_intersecao.x) && !isnan(ponto_intersecao.y)) {
        printf("Ponto de intersecao: (%.2f, %.2f)\n", ponto_intersecao.x, ponto_intersecao.y);
    } else {
        printf("Nao ha pontos de intersecao.\n");
    }

    return 0;
}

