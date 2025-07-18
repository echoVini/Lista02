#include <stdio.h>

int main() {
    int numero;
    long long produtorio = 1; // usar long long para suportar números grandes
    int encontrouPar = 0;

    printf("Digite números inteiros positivos (0 para encerrar):\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero == 0)
            break;

        if (numero > 0 && numero % 2 == 0) {
            produtorio *= numero;
            encontrouPar = 1;
        }
    }

    if (encontrouPar) {
        printf("\nProdutório dos números pares: %lld\n", produtorio);
    } else {
        printf("\nNenhum número par foi digitado.\n");
    }

    return 0;
}
