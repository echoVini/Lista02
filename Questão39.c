#include <stdio.h>

// Função para verificar se um número é perfeito
int ehPerfeito(int num) {
    int soma = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }
    return soma == num;
}

int main() {
    int contador = 0;
    int num = 2; // Começa em 2 pois 1 não é perfeito

    printf("Os 5 primeiros números perfeitos são:\n");

    while (contador < 5) {
        if (ehPerfeito(num)) {
            printf("%d\n", num);
            contador++;
        }
        num++;
    }

    return 0;
}
