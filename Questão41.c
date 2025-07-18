#include <stdio.h>

int main() {
    float n1, n2, n3, mediaPonderada, somaMedias = 0;
    int i;

    for (i = 1; i <= 50; i++) {
        printf("\nAluno %d\n", i);
        printf("Digite a primeira nota: ");
        scanf("%f", &n1);
        printf("Digite a segunda nota: ");
        scanf("%f", &n2);
        printf("Digite a terceira nota: ");
        scanf("%f", &n3);

        mediaPonderada = (n1 * 2 + n2 * 4 + n3 * 3) / 10.0;
        somaMedias += mediaPonderada;

        printf("Média do aluno %d: %.2f - ", i, mediaPonderada);

        if (mediaPonderada >= 7.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

    float mediaGeral = somaMedias / 50.0;
    printf("\nMédia geral da turma: %.2f\n", mediaGeral);

    return 0;
}
