#include <stdio.h>

int main() {
    int matricula;
    float nota;
    char conceito;

    for (int i = 1; i <= 75; i++) {
        printf("\nAluno %d\n", i);
        printf("Número de matrícula: ");
        scanf("%d", &matricula);

        printf("Nota final: ");
        scanf("%f", &nota);

        // Atribuição do conceito com base na nota
        if (nota >= 0.0 && nota <= 4.9) {
            conceito = 'D';
        } else if (nota >= 5.0 && nota <= 6.9) {
            conceito = 'C';
        } else if (nota >= 7.0 && nota <= 8.9) {
            conceito = 'B';
        } else if (nota >= 9.0 && nota <= 10.0) {
            conceito = 'A';
        } else {
            printf("Nota inválida!\n");
            continue; // ignora esse aluno e vai pro próximo
        }

        // Exibe o resultado
        printf("Matrícula: %d - Nota: %.1f - Conceito: %c\n", matricula, nota, conceito);
    }

    return 0;
}
