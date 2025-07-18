#include <stdio.h>

int main() {
    int valor;
    int totalValores = 0;
    int positivos = 0, negativos = 0;
    int soma = 0;
    float media, percPositivos, percNegativos;

    printf("Digite valores inteiros (0 para encerrar):\n");

    while (1) {
        scanf("%d", &valor);

        if (valor == 0) {
            break;
        }

        soma += valor;
        totalValores++;

        if (valor > 0) {
            positivos++;
        } else if (valor < 0) {
            negativos++;
        }
    }

    if (totalValores == 0) {
        printf("Nenhum valor foi digitado.\n");
    } else {
        media = (float)soma / totalValores;
        percPositivos = (positivos * 100.0) / totalValores;
        percNegativos = (negativos * 100.0) / totalValores;

        printf("\nResultados:\n");
        printf("Média dos valores: %.2f\n", media);
        printf("Quantidade de valores positivos: %d\n", positivos);
        printf("Quantidade de valores negativos: %d\n", negativos);
        printf("Percentual de valores positivos: %.2f%%\n", percPositivos);
        printf("Percentual de valores negativos: %.2f%%\n", percNegativos);
    }

    return 0;
}
