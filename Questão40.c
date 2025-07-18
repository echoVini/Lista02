#include <stdio.h>

// Função para calcular fatorial
unsigned long long fatorial(int m) {
    unsigned long long fat = 1;
    for (int i = 2; i <= m; i++) {
        fat *= i;
    }
    return fat;
}

// Função para calcular somatório de 1 até m
int somatorio(int m) {
    return m * (m + 1) / 2;  // fórmula da soma dos primeiros m inteiros
}

int main() {
    int n, m;

    printf("Digite a quantidade de valores a serem lidos (n): ");
    scanf("%d", &n);

    printf("\nValor\tSomatório(1 até m)\tFatorial\n");
    printf("---------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        do {
            printf("Digite o valor %d para m (inteiro positivo): ", i + 1);
            scanf("%d", &m);
            if (m < 0) {
                printf("Valor inválido! Deve ser positivo.\n");
            }
        } while (m < 0);

        int soma = somatorio(m);
        unsigned long long fat = fatorial(m);

        printf("%d\t%d\t\t\t%llu\n", m, soma, fat);
    }

    return 0;
}
