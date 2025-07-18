#include <stdio.h>

int main() {
    int numero, somaNegativos = 0;

    printf("Digite números inteiros (0 para encerrar):\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero == 0)
            break;

        if (numero < 0)
            somaNegativos += numero;
    }

    printf("\nSomatório dos números negativos: %d\n", somaNegativos);

    return 0;
}
