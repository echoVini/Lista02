#include <stdio.h>

int main() {
    int a, b;

    for (int i = 1; i <= 5; i++) {
        do {
            printf("Digite o par %d (a b), com a < b e ambos positivos: ", i);
            scanf("%d %d", &a, &b);
            if (a <= 0 || b <= 0 || a >= b) {
                printf("Entrada inválida. Tente novamente.\n");
            }
        } while (a <= 0 || b <= 0 || a >= b);

        printf("Números pares entre %d e %d: ", a, b);
        for (int num = a; num <= b; num++) {
            if (num % 2 == 0) {
                printf("%d ", num);
            }
        }
        printf("\n");
    }

    return 0;
}
