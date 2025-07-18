#include <stdio.h>

int main() {
    int codigo;
    float nota1, nota2, nota3;
    float media, maior, somaNotas, pesoTotal;
    
    while (1) {
        printf("\nDigite o código do aluno (negativo para sair): ");
        scanf("%d", &codigo);
        
        if (codigo < 0) break;
        
        printf("Digite as três notas do aluno:\n");
        scanf("%f %f %f", &nota1, &nota2, &nota3);
        
        // Encontrar a maior nota
        maior = nota1;
        if (nota2 > maior) maior = nota2;
        if (nota3 > maior) maior = nota3;
        
        // Calcular a média ponderada
        // Peso da maior nota = 4, das outras duas = 3
        somaNotas = nota1 + nota2 + nota3;
        pesoTotal = 4 + 3 + 3; // total = 10
        
        media = (maior * 4 + (somaNotas - maior) * 3) / pesoTotal;
        
        // Mostrar resultado
        printf("Código do aluno: %d\n", codigo);
        printf("Notas: %.2f, %.2f, %.2f\n", nota1, nota2, nota3);
        printf("Média ponderada: %.2f\n", media);
        
        if (media >= 5.0) {
            printf("APROVADO\n");
        } else {
            printf("REPROVADO\n");
        }
    }
    
    printf("\nFim do programa.\n");
    return 0;
}

