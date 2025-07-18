#include <stdio.h>

int main() {
    int numero, soma = 0, quantidade = 0;
    float media;

    printf("Digite números inteiros (0 para encerrar):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero % 2 == 0) {
            soma += numero;
            quantidade++;
        }
    }

    if (quantidade == 0) {
        printf("Nenhum número par foi digitado.\n");
    } else {
        media = (float)soma / quantidade;
        printf("Média dos números pares: %.2f\n", media);
    }

    return 0;
}
