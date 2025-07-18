#include <stdio.h>

int main() {
    int numero;
    int soma = 0, contador = 0;

    printf("Digite números (digite um número negativo para encerrar):\n");

    while (1) {
        printf("Número: ");
        scanf("%d", &numero);

        if (numero < 0)
            break;

        if (numero >= 13 && numero <= 73) {
            soma += numero;
            contador++;
        }
    }

    if (contador > 0) {
        double media = (double)soma / contador;
        printf("Média dos números entre 13 e 73: %.2f\n", media);
    } else {
        printf("Nenhum número válido foi digitado.\n");
    }

    return 0;
}
