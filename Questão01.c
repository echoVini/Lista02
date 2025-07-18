#include <stdio.h>

int main() {
    int valor, negativos = 0;

    for (int i = 1; i <= 5; i++) {
        printf("Digite o %dº valor: ", i);
        scanf("%d", &valor);

        if (valor < 0) {
            negativos++;
        }
    }

    printf("Quantidade de valores negativos: %d\n", negativos);

    return 0;
}
