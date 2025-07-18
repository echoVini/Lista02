#include <stdio.h>

int main() {
    int sexo, idade;
    float altura;

    int totalPessoas = 0;
    int somaIdades = 0;
    int somaIdadeHomens = 0, countHomens = 0;
    float somaAlturaMulheres = 0;
    int countMulheres = 0;
    int count18a35 = 0;

    do {
        printf("Pessoa %d:\n", totalPessoas + 1);

        printf("Sexo (0-feminino, 1-masculino): ");
        scanf("%d", &sexo);
        while (sexo != 0 && sexo != 1) {
            printf("Valor inválido. Digite 0 para feminino ou 1 para masculino: ");
            scanf("%d", &sexo);
        }

        printf("Idade: ");
        scanf("%d", &idade);
        while (idade < 0) {
            printf("Idade inválida. Digite novamente: ");
            scanf("%d", &idade);
        }

        printf("Altura (em metros): ");
        scanf("%f", &altura);
        while (altura <= 0) {
            printf("Altura inválida. Digite novamente: ");
            scanf("%f", &altura);
        }

        somaIdades += idade;

        if (sexo == 0) {
            somaAlturaMulheres += altura;
            countMulheres++;
        } else {
            somaIdadeHomens += idade;
            countHomens++;
        }

        if (idade >= 18 && idade <= 35) {
            count18a35++;
        }

        totalPessoas++;
        printf("\n");

    } while (totalPessoas < 1000);

    // Resultados
    float mediaIdadeGrupo = (float)somaIdades / totalPessoas;
    float mediaAlturaMulheres = countMulheres > 0 ? somaAlturaMulheres / countMulheres : 0;
    float mediaIdadeHomens = countHomens > 0 ? (float)somaIdadeHomens / countHomens : 0;
    float percentual18a35 = ((float)count18a35 / totalPessoas) * 100;

    printf("Resultados da pesquisa:\n");
    printf("a) Média da idade do grupo: %.2f\n", mediaIdadeGrupo);
    printf("b) Média da altura das mulheres: %.2f\n", mediaAlturaMulheres);
    printf("c) Média da idade dos homens: %.2f\n", mediaIdadeHomens);
    printf("d) Percentual de pessoas com idade entre 18 e 35 anos: %.2f%%\n", percentual18a35);

    return 0;
}
