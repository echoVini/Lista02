#include <stdio.h>

int main() {
    int idade, maior_idade = 0;
    char sexo, olhos, cabelos;
    int contador_fem_verde_louro = 0;

    printf("Digite os dados dos habitantes. Para encerrar, digite idade -1.\n");

    while (1) {
        printf("\nIdade: ");
        scanf("%d", &idade);

        if (idade == -1)
            break;

        if (idade > maior_idade)
            maior_idade = idade;

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Cor dos olhos (A = Azuis, V = Verdes, C = Castanhos): ");
        scanf(" %c", &olhos);

        printf("Cor dos cabelos (L = Louros, C = Castanhos, P = Pretos): ");
        scanf(" %c", &cabelos);

        if ((sexo == 'F' || sexo == 'f') &&
            (idade >= 18 && idade <= 35) &&
            (olhos == 'V' || olhos == 'v') &&
            (cabelos == 'L' || cabelos == 'l')) {
            contador_fem_verde_louro++;
        }
    }

    printf("\n--- RESULTADOS ---\n");
    printf("Maior idade dos habitantes: %d\n", maior_idade);
    printf("Quantidade de mulheres entre 18 e 35 anos com olhos verdes e cabelos louros: %d\n", contador_fem_verde_louro);

    return 0;
}
