#include <stdio.h>

int main() {
    double num1, num2, intervalo, passo;
    
    // Leitura dos números
    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);

    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    // Verifica se os números são iguais
    if (num1 == num2) {
        printf("Erro: os números devem ser diferentes.\n");
        return 1;
    }

    // Calcula o intervalo e o passo para dividir em 3 partes iguais
    intervalo = num2 - num1;
    passo = intervalo / 3.0;

    // Mostra os pontos que dividem o intervalo em 3 partes
    printf("Intervalo dividido em 3 partes iguais:\n");
    printf("Ponto 1: %.2lf\n", num1 + passo);
    printf("Ponto 2: %.2lf\n", num1 + 2 * passo);

    return 0;
}
