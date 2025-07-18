#include <stdio.h>

int main() {
    int x, y;
    unsigned long long resultado = 1;

    // Leitura dos valores
    printf("Digite o valor de X (base): ");
    scanf("%d", &x);

    printf("Digite o valor de Y (expoente): ");
    scanf("%d", &y);

    // Verificação se os valores são positivos
    if (x < 0 || y < 0) {
        printf("Erro: ambos os valores devem ser inteiros e positivos.\n");
        return 1;
    }

    // Cálculo da potência
    for (int i = 1; i <= y; i++) {
        resultado *= x;
    }

    // Exibição do resultado
    printf("%d elevado a %d é: %llu\n", x, y, resultado);

    return 0;
}
