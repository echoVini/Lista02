#include <stdio.h>

int main() {
    int n;
    unsigned long long fatorial = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Número inválido. Digite um valor positivo.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            fatorial *= i;
        }
        printf("Fatorial de %d é: %llu\n", n, fatorial);
    }

    return 0;
}
