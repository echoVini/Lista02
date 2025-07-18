#include <stdio.h>

void ordenarDecrescente(int v[], int tamanho) {
    int i, j, temp;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = i + 1; j < tamanho; j++) {
            if (v[i] < v[j]) {
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
}

int main() {
    int grupo[4];
    int i, j;

    for (i = 1; i <= 5; i++) {
        printf("Grupo %d:\n", i);
        for (j = 0; j < 4; j++) {
            printf("Digite o valor %c: ", 'A' + j);
            scanf("%d", &grupo[j]);
        }

        // Mostra na ordem lida
        printf("Ordem lida: ");
        for (j = 0; j < 4; j++) {
            printf("%d ", grupo[j]);
        }

        // Ordena em ordem decrescente
        ordenarDecrescente(grupo, 4);

        // Mostra na ordem decrescente
        printf("\nOrdem decrescente: ");
        for (j = 0; j < 4; j++) {
            printf("%d ", grupo[j]);
        }

        printf("\n\n");
    }

    return 0;
}
