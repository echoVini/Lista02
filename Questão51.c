#include <stdio.h>

int main() {
    int n;
    unsigned long long fatorial = 1;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Número inválido! O fatorial só é definido para números não negativos.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf("O fatorial de %d é %llu\n", n, fatorial);

    return 0;
}
