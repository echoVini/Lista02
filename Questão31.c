#include <stdio.h>

int main() {
    int valor;
    int dentro = 0, fora = 0;

    printf("Digite 10 valores:\n");

    for (int i = 1; i <= 10; i++) {
        printf("Valor %d: ", i);
        scanf("%d", &valor);

        if (valor >= 10 && valor <= 20) {
            dentro++;
        } else {
            fora++;
        }
    }

    printf("\nQuantidade dentro do intervalo [10, 20]: %d\n", dentro);
    printf("Quantidade fora do intervalo: %d\n", fora);

    return 0;
}
