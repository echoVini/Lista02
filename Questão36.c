#include <stdio.h>

// Função para calcular fatorial de um número inteiro não negativo
unsigned long long fatorial(int num) {
    unsigned long long fat = 1;
    for (int i = 2; i <= num; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    int N, valor;

    printf("Digite quantos valores serão lidos (N): ");
    scanf("%d", &N);

    printf("\nValor\tFatorial\n");
    printf("--------------------\n");

    for (int i = 0; i < N; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valor);

        if (valor < 0) {
            printf("Valor inválido (negativo). Será considerado fatorial = 0.\n");
            printf("%d\t0\n", valor);
        } else {
            printf("%d\t%llu\n", valor, fatorial(valor));
        }
    }

    return 0;
}
