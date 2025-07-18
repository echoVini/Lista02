#include <stdio.h>
#include <math.h>

int main() {
    double valor;
    int contador = 0;

    printf("Digite valores (negativo para encerrar):\n");

    while (1) {
        scanf("%lf", &valor);

        if (valor < 0) {
            break;
        }

        // Imprime cabeçalho a cada 20 linhas
        if (contador % 20 == 0) {
            printf("\nValor\tQuadrado\tCubo\tRaiz Quadrada\n");
            printf("-------------------------------------------------\n");
        }

        printf("%.2lf\t%.2lf\t\t%.2lf\t%.2lf\n", valor, valor*valor, valor*valor*valor, sqrt(valor));
        contador++;
    }

    printf("\nFim do programa.\n");
    return 0;
}
