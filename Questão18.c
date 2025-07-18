#include <stdio.h>

int main() {
    int m;

    printf("Digite valores inteiros positivos para m (digite 0 ou negativo para encerrar):\n");

    while (1) {
        printf("Digite m: ");
        scanf("%d", &m);

        if (m <= 0) {
            break;
        }

        if (m % 2 == 0) {
            // m é par: contar divisores
            int divisores = 0;
            for (int i = 1; i <= m; i++) {
                if (m % i == 0) {
                    divisores++;
                }
            }
            printf("O número %d é par e possui %d divisores.\n", m, divisores);
        } else {
            if (m < 10) {
                // m é ímpar e menor que 10: calcular fatorial
                int fatorial = 1;
                for (int i = 1; i <= m; i++) {
                    fatorial *= i;
                }
                printf("O número %d é ímpar e menor que 10. Seu fatorial é: %d\n", m, fatorial);
            } else {
                // m é ímpar e >= 10: soma de 1 até m
                int soma = 0;
                for (int i = 1; i <= m; i++) {
                    soma += i;
                }
                printf("O número %d é ímpar e >= 10. A soma de 1 até %d é: %d\n", m, m, soma);
            }
        }

        printf("\n");
    }

    printf("Programa encerrado.\n");
    return 0;
}
