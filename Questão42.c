#include <stdio.h>

int main() {
    int n;
    int H;

    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &n);

    if (n > 0) {
        H = 10 * n;
        printf("Resultado da soma H = %d\n", H);
    } else {
        printf("Número inválido. Digite um número inteiro positivo.\n");
    }

    return 0;
}

