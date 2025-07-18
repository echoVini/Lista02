#include <stdio.h>

int main() {
    int valor, maior, menor;

    printf("Digite 50 valores inteiros:\n");

    for (int i = 1; i <= 50; i++) {
        printf("Valor %d: ", i);
        scanf("%d", &valor);

        if (i == 1) {
            maior = menor = valor;  // Inicializa ambos com o primeiro valor
        } else {
            if (valor > maior) {
                maior = valor;
            }
            if (valor < menor) {
                menor = valor;
            }
        }
    }

    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
