#include <stdio.h>

int main() {
    char nome[100];
    float valorCompras, bonus;

    for (int i = 1; i <= 150; i++) {
        printf("Cliente %d\n", i);

        printf("Nome: ");
        scanf(" %[^\n]", nome); // Lê o nome completo com espaços

        printf("Valor das compras no ano passado (R$): ");
        scanf("%f", &valorCompras);

        // Cálculo do bônus
        if (valorCompras < 500000) {
            bonus = valorCompras * 0.10;
        } else {
            bonus = valorCompras * 0.15;
        }

        printf("Cliente: %s\n", nome);
        printf("Valor das compras: R$ %.2f\n", valorCompras);
        printf("Bônus concedido: R$ %.2f\n", bonus);
        printf("-------------------------------\n");
    }

    return 0;
}
