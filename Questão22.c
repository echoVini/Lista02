#include <stdio.h>

int main() {
    int idade, count = 0, mulheres_salario_baixo = 0;
    float salario, soma_salario = 0;
    char sexo;
    int maior_idade = -1, menor_idade = 1000; // valores iniciais extremos

    printf("Digite os dados dos habitantes (idade, sexo M/F, salário).\n");
    printf("Para encerrar, digite uma idade negativa.\n");

    while (1) {
        printf("\nDigite a idade: ");
        scanf("%d", &idade);

        if (idade < 0) break;

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo); // espaço antes do %c para ignorar ENTER

        printf("Digite o salário: R$");
        scanf("%f", &salario);

        // Atualizar soma e contagem para média salarial
        soma_salario += salario;
        count++;

        // Atualizar maior e menor idade
        if (idade > maior_idade) maior_idade = idade;
        if (idade < menor_idade) menor_idade = idade;

        // Contar mulheres com salário até R$100
        if ((sexo == 'F' || sexo == 'f') && salario <= 100.0) {
            mulheres_salario_baixo++;
        }
    }

    if (count > 0) {
        printf("\n--- Resultados da Pesquisa ---\n");
        printf("a) Média salarial do grupo: R$%.2f\n", soma_salario / count);
        printf("b) Maior idade: %d\n", maior_idade);
        printf("   Menor idade: %d\n", menor_idade);
        printf("c) Mulheres com salário até R$100,00: %d\n", mulheres_salario_baixo);
    } else {
        printf("\nNenhum dado foi informado.\n");
    }

    return 0;
}
