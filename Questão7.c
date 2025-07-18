#include <stdio.h>

int main() {
    int codigo;
    float nota1, nota2, nota3, media;

    while (1) {
        printf("\nDigite o código do aluno (0 para encerrar): ");
        scanf("%d", &codigo);

        if (codigo == 0) {
            break;
        }

        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3) / 3.0;

        printf("Média do aluno %d: %.2f\n", codigo, media);
    }

    printf("\nFim do programa.\n");
    return 0;
}
