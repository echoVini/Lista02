#include <stdio.h>
#include <string.h>

#define TOTAL_CIDADES 200

int main() {
    int codigo, numVeiculos, numAcidentes;
    char estado[3];

    int totalVeiculos = 0;
    int totalAcidentesRS = 0;
    int cidadesRS = 0;

    int maiorIndice = -1, menorIndice = 1000000;
    int codMaior = 0, codMenor = 0;

    for (int i = 0; i < TOTAL_CIDADES; i++) {
        printf("Cidade %d\n", i + 1);
        printf("Código da cidade: ");
        scanf("%d", &codigo);

        printf("Estado (ex: RS, SC): ");
        scanf("%s", estado);

        printf("Número de veículos de passeio (1992): ");
        scanf("%d", &numVeiculos);

        printf("Número de acidentes com vítimas (1992): ");
        scanf("%d", &numAcidentes);

        // Acumulando total de veículos
        totalVeiculos += numVeiculos;

        // Verifica se é do RS
        if (strcmp(estado, "RS") == 0 || strcmp(estado, "rs") == 0) {
            totalAcidentesRS += numAcidentes;
            cidadesRS++;
        }

        // Atualiza maior e menor índice
        if (numAcidentes > maiorIndice) {
            maiorIndice = numAcidentes;
            codMaior = codigo;
        }
        if (numAcidentes < menorIndice) {
            menorIndice = numAcidentes;
            codMenor = codigo;
        }

        printf("\n");
    }

    // Cálculos finais
    float mediaVeiculos = (float)totalVeiculos / TOTAL_CIDADES;
    float mediaAcidentesRS = cidadesRS > 0 ? (float)totalAcidentesRS / cidadesRS : 0;

    // Resultados
    printf("Maior índice de acidentes: %d (Cidade código %d)\n", maiorIndice, codMaior);
    printf("Menor índice de acidentes: %d (Cidade código %d)\n", menorIndice, codMenor);
    printf("Média de veículos nas cidades: %.2f\n", mediaVeiculos);
    printf("Média de acidentes com vítimas nas cidades do RS: %.2f\n", mediaAcidentesRS);

    return 0;
}
