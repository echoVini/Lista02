#include <stdio.h>

int main() {
    int n, i;
    float a1, r, termo, soma = 0;

    printf("Digite o número de termos (n): ");
    scanf("%d", &n);

    printf("Digite o primeiro termo (a1): ");
    scanf("%f", &a1);

    printf("Digite a razão (r): ");
    scanf("%f", &r);

    printf("Progressão Aritmética:\n");

    for (i = 0; i < n; i++) {
        termo = a1 + i * r;
        printf("%.2f ", termo);
        soma += termo;
    }

    printf("\nSoma dos termos: %.2f\n", soma);

    return 0;
}
