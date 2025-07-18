#include <stdio.h>

int main() {
    int numero, maior, menor;
    long soma = 0;
    int i;

    printf("Digite 500 números inteiros e positivos:\n");

    for (i = 0; i < 500; i++) {
        do {
            printf("Digite o %dº número: ", i + 1);
            scanf("%d", &numero);

            if (numero <= 0) {
                printf("Erro: o número deve ser positivo.\n");
            }

        } while (numero <= 0);

        if (i == 0) {
            maior = menor = numero; // inicializa com o primeiro número
        } else {
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }

        soma += numero;
    }

    double media = (double)soma / 500;

    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média dos valores: %.2f\n", media);

    return 0;
}
