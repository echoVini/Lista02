#include <stdio.h>

int main() {
    float altura, maiorAltura = 0, menorAltura = 1000.0;
    float somaAlturaMulheres = 0, somaAlturaTotal = 0;
    int sexo, contadorMulheres = 0;
    int totalPessoas = 50;

    for (int i = 1; i <= totalPessoas; i++) {
        printf("Informe a altura da pessoa %d (em metros): ", i);
        scanf("%f", &altura);

        do {
            printf("Informe o sexo da pessoa %d (1 = Masculino, 2 = Feminino): ", i);
            scanf("%d", &sexo);

            if (sexo != 1 && sexo != 2) {
                printf("Sexo inválido! Digite 1 para Masculino ou 2 para Feminino.\n");
            }
        } while (sexo != 1 && sexo != 2);

        // Atualiza maior e menor altura
        if (altura > maiorAltura) {
            maiorAltura = altura;
        }
        if (altura < menorAltura) {
            menorAltura = altura;
        }

        // Soma alturas para média geral
        somaAlturaTotal += altura;

        // Se for mulher, soma para média feminina
        if (sexo == 2) {
            somaAlturaMulheres += altura;
            contadorMulheres++;
        }
    }

    printf("\n--- RESULTADOS ---\n");
    printf("Maior altura da turma: %.2f metros\n", maiorAltura);
    printf("Menor altura da turma: %.2f metros\n", menorAltura);

    if (contadorMulheres > 0) {
        printf("Média da altura das mulheres: %.2f metros\n", somaAlturaMulheres / contadorMulheres);
    } else {
        printf("Não foram informadas alturas de mulheres.\n");
    }

    printf("Média da altura da turma: %.2f metros\n", somaAlturaTotal / totalPessoas);

    return 0;
}
