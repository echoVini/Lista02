#include <stdio.h>

int main() {
    int n;
    double S = 0.0;

    printf("Digite um número inteiro positivo n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Número inválido! Deve ser inteiro e positivo.\n");
        return 1;
    }

    printf("Termos da soma:\n");

    for (int i = 1; i <= n; i++) {
        double termo = 1.0 / i;
        S += termo;
        printf("1/%d = %.6f\n", i, termo);
    }

    printf("\nValor final de S = %.6f\n", S);

    return 0;
}
