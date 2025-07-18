#include <stdio.h>

int main() {
    char sexo, olhos, cabelos;
    int idade;
    int maior_idade = 0;
    int count_feminino_criterios = 0;

    for (int i = 1; i <= 500; i++) {
        printf("Pessoa %d:\n", i);

        // Sexo
        do {
            printf("Sexo (M - masculino, F - feminino): ");
            scanf(" %c", &sexo);
        } while (sexo != 'M' && sexo != 'F' && sexo != 'm' && sexo != 'f');

        // Cor dos olhos
        do {
            printf("Cor dos olhos (A - azuis, V - verdes, C - castanhos): ");
            scanf(" %c", &olhos);
        } while (olhos != 'A' && olhos != 'V' && olhos != 'C' &&
                 olhos != 'a' && olhos != 'v' && olhos != 'c');

        // Cor dos cabelos
        do {
            printf("Cor dos cabelos (L - louros, C - castanhos, P - pretos): ");
            scanf(" %c", &cabelos);
        } while (cabelos != 'L' && cabelos != 'C' && cabelos != 'P' &&
                 cabelos != 'l' && cabelos != 'c' && cabelos != 'p');

        // Idade
        do {
            printf("Idade: ");
            scanf("%d", &idade);
        } while (idade < 0);

        // Atualiza maior idade
        if (idade > maior_idade) {
            maior_idade = idade;
        }

        // Verifica critério da mulher com olhos verdes e cabelos louros
        if ((sexo == 'F' || sexo == 'f') &&
            idade >= 18 && idade <= 35 &&
            (olhos == 'V' || olhos == 'v') &&
            (cabelos == 'L' || cabelos == 'l')) {
            count_feminino_criterios++;
        }

        printf("\n");
    }

    // Exibe resultados
    printf("====================================\n");
    printf("Maior idade do grupo: %d anos\n", maior_idade);
    printf("Quantidade de mulheres com idade entre 18 e 35 anos,\n");
    printf("olhos verdes e cabelos louros: %d\n", count_feminino_criterios);

    return 0;
}
