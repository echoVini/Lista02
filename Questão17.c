#include <stdio.h>

int main() {
    int m, n;
    
    printf("Digite pares de valores inteiros positivos (m n). Digite valor negativo para encerrar.\n");

    while (1) {
        printf("Digite o par (m n): ");
        if (scanf("%d %d", &m, &n) != 2) {
            printf("Entrada inválida.\n");
            
            while(getchar() != '\n');
            continue;
        }

        if (m < 0 || n < 0) {
            break;
        }

        int soma = 0;
        int limite = m + n - 1;

        for (int i = m; i <= limite; i++) {
            soma += i;
        }

        printf("Soma dos %d inteiros consecutivos a partir de %d: %d\n\n", n, m, soma);
    }

    printf("Programa encerrado.\n");
    return 0;
}
