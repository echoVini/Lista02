#include <stdio.h>

int main() {
    int codigo, contador = 0;
    float preco, preco_novo;
    float soma_sem_aumento = 0, soma_com_aumento = 0;

    printf("Digite o código e o preço de custo dos produtos.\n");
    printf("Para encerrar, digite um código negativo.\n");

    while (1) {
        printf("\nCódigo do produto: ");
        scanf("%d", &codigo);

        if (codigo < 0)
            break;

        printf("Preço de custo: R$ ");
        scanf("%f", &preco);

        preco_novo = preco * 1.20;

        printf("Código: %d | Preço novo com 20%% de aumento: R$ %.2f\n", codigo, preco_novo);

        soma_sem_aumento += preco;
        soma_com_aumento += preco_novo;
        contador++;
    }

    if (contador > 0) {
        printf("\n--- RESUMO ---\n");
        printf("Média dos preços sem aumento: R$ %.2f\n", soma_sem_aumento / contador);
        printf("Média dos preços com aumento: R$ %.2f\n", soma_com_aumento / contador);
    } else {
        printf("\nNenhum produto foi informado.\n");
    }

    return 0;
}
