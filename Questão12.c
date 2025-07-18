#include <stdio.h>

int main() {
    int n, i, valor;

    for (int k = 1; k <= 20; k++) {
        printf("Digite o %dº valor: ", k);
        scanf("%d", &valor);

        printf("Tabuada do %d:\n", valor);

        for (i = 1; i <= valor; i++) {
            printf("%d x %d = %d\n", i, valor, i * valor);
        }

        printf("\n");
    }

    return 0;
}
