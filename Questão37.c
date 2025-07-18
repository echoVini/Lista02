#include <stdio.h>
#include <math.h>

int main() {
    int X;
    printf("Digite o valor de X: ");
    scanf("%d", &X);

    printf("20 primeiros termos da série:\n");

    // Imprime os 4 primeiros termos iguais a 1
    for (int i = 1; i <= 4; i++) {
        printf("1 ");
    }

    // Imprime os próximos 16 termos: X^1, X^2, ..., X^16
    for (int i = 1; i <= 16; i++) {
        printf("%d ", (int)pow(X, i));
    }

    printf("\n");

    return 0;
}
