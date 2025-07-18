#include <stdio.h>

int main()
{
    int N;
    double E = 1.0; // Começa com 1
    double fatorial;

    // Ler N com validação
    do
    {
        printf("Digite um valor inteiro e positivo para N: ");
        scanf("%d", &N);

        if (N < 0)
        {
            printf("Erro: N deve ser um número inteiro positivo.\n");
        }
    } while (N < 0);

    // Calcular E
    for (int i = 1; i <= N; i++)
    {
        fatorial = 1;
        for (int j = 1; j <= i; j++)
        {
            fatorial *= j;
        }
        E += 1.0 / fatorial;
    }

    printf("O valor de E é: %.6lf\n", E);

    return 0;
}
