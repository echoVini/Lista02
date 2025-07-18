#include <stdio.h>

int main() {
    char sexo, olhos, cabelos;
    int idade;

    int total = 0, soma_idade = 0;
    int contador_fem_verde_louro_18_35 = 0;

    int olhos_azuis = 0, olhos_verdes = 0, olhos_castanhos = 0;
    int cabelo_louro = 0, cabelo_castanho = 0, cabelo_preto = 0;

    printf("Digite os dados dos habitantes. Para encerrar, digite idade negativa.\n");

    while (1) {
        printf("\nIdade: ");
        scanf("%d", &idade);
        if (idade < 0) break;

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Cor dos olhos (A = Azuis, V = Verdes, C = Castanhos): ");
        scanf(" %c", &olhos);

        printf("Cor dos cabelos (L = Louros, C = Castanhos, P = Pretos): ");
        scanf(" %c", &cabelos);

        total++;
        soma_idade += idade;

        // Contar características específicas
        if ((sexo == 'F' || sexo == 'f') &&
            (olhos == 'V' || olhos == 'v') &&
            (cabelos == 'L' || cabelos == 'l') &&
            (idade >= 18 && idade <= 35)) {
            contador_fem_verde_louro_18_35++;
        }

        // Contagem de cores de olhos
        if (olhos == 'A' || olhos == 'a') olhos_azuis++;
        else if (olhos == 'V' || olhos == 'v') olhos_verdes++;
        else if (olhos == 'C' || olhos == 'c') olhos_castanhos++;

        // Contagem de cores de cabelo
        if (cabelos == 'L' || cabelos == 'l') cabelo_louro++;
        else if (cabelos == 'C' || cabelos == 'c') cabelo_castanho++;
        else if (cabelos == 'P' || cabelos == 'p') cabelo_preto++;
    }

    if (total > 0) {
        printf("\n--- RESULTADOS ---\n");
        printf("Total de habitantes analisados: %d\n", total);
        printf("Média de idade: %.2f\n", (float)soma_idade / total);
        printf("Mulheres com olhos verdes, cabelos louros e idade entre 18 e 35: %d\n", contador_fem_verde_louro_18_35);

        printf("\nDistribuição dos olhos:\n");
        printf("Azuis: %.2f%%\n", 100.0 * olhos_azuis / total);
        printf("Verdes: %.2f%%\n", 100.0 * olhos_verdes / total);
        printf("Castanhos: %.2f%%\n", 100.0 * olhos_castanhos / total);

        printf("\nDistribuição dos cabelos:\n");
        printf("Louros: %.2f%%\n", 100.0 * cabelo_louro / total);
        printf("Castanhos: %.2f%%\n", 100.0 * cabelo_castanho / total);
        printf("Pretos: %.2f%%\n", 100.0 * cabelo_preto / total);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}
