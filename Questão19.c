#include <stdio.h>

int main() {
    int numero;
    int somaPares = 0, somaTotal = 0;
    int qtdPares = 0, qtdImpares = 0, qtdTotal = 0;

    printf("Digite números positivos (0 para encerrar):\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero == 0)
            break;

        if (numero < 0) {
            printf("Número inválido! Digite apenas números positivos.\n");
            continue;
        }

        somaTotal += numero;
        qtdTotal++;

        if (numero % 2 == 0) {
            somaPares += numero;
            qtdPares++;
        } else {
            qtdImpares++;
        }
    }

    // Cálculo de médias
    float mediaPares = (qtdPares > 0) ? (float)somaPares / qtdPares : 0;
    float mediaGeral = (qtdTotal > 0) ? (float)somaTotal / qtdTotal : 0;

    // Resultados
    printf("\n--- RESULTADOS ---\n");
    printf("Quantidade de números pares: %d\n", qtdPares);
    printf("Quantidade de números ímpares: %d\n", qtdImpares);
    printf("Média dos valores pares: %.2f\n", mediaPares);
    printf("Média geral dos números lidos: %.2f\n", mediaGeral);

    return 0;
}
