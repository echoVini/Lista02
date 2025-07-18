#include <stdio.h>

int main() {
    float salario, somaSalarios = 0.0, maiorSalario = 0.0;
    int filhos, somaFilhos = 0;
    int totalPessoas = 0;
    int pessoasAte100 = 0;

    // Entrada dos dados
    printf("Digite o salário (valor negativo para encerrar): ");
    scanf("%f", &salario);

    while (salario >= 0) {
        printf("Digite o número de filhos: ");
        scanf("%d", &filhos);

        somaSalarios += salario;
        somaFilhos += filhos;
        totalPessoas++;

        if (salario > maiorSalario) {
            maiorSalario = salario;
        }

        if (salario <= 100.0) {
            pessoasAte100++;
        }

        printf("\nDigite o próximo salário (valor negativo para encerrar): ");
        scanf("%f", &salario);
    }

    if (totalPessoas == 0) {
        printf("\nNenhum dado foi inserido.\n");
    } else {
        float mediaSalario = somaSalarios / totalPessoas;
        float mediaFilhos = (float)somaFilhos / totalPessoas;
        float percentualAte100 = (pessoasAte100 * 100.0) / totalPessoas;

        printf("\nResultados da pesquisa:\n");
        printf("a) Média do salário: R$ %.2f\n", mediaSalario);
        printf("b) Média do número de filhos: %.2f\n", mediaFilhos);
        printf("c) Maior salário: R$ %.2f\n", maiorSalario);
        printf("d) Percentual com salário até R$100,00: %.2f%%\n", percentualAte100);
    }

    return 0;
}
