#include <stdio.h>

int main() {
    int valor, soma = 0, contador = 0;
    float media;

    printf("Digite valores inteiros positivos (valor negativo para encerrar):\n");

    while (1) {
        scanf("%d", &valor);

        if (valor < 0) {
            break;  // Encerra a leitura
        }

        soma += valor;
        contador++;
    }

    if (contador == 0) {
        printf("Nenhum valor positivo foi inserido.\n");
    } else {
        media = (float)soma / contador;
        printf("Média aritmética dos valores: %.2f\n", media);
    }

    return 0;
}

