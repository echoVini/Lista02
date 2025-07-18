#include <stdio.h>

// Função para calcular fatorial de um número inteiro não negativo
unsigned long long fatorial(int num) {
    unsigned long long fat = 1;
    for (int i = 1; i <= num; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    int n, p;
    unsigned long long arranjo, combinacao;

    // Leitura dos valores
    printf("Digite o valor de n (tamanho do conjunto): ");
    scanf("%d", &n);

    printf("Digite o valor de p (tamanho do subconjunto): ");
    scanf("%d", &p);

    // Validação dos valores
    if (n < 0 || p < 0 || p > n) {
        printf("Valores inválidos! Certifique-se que 0 <= p <= n.\n");
        return 1;
    }

    // Cálculo do arranjo A(n,p) = n! / (n-p)!
    arranjo = fatorial(n) / fatorial(n - p);

    // Cálculo da combinação C(n,p) = n! / (p! * (n-p)!)
    combinacao = fatorial(n) / (fatorial(p) * fatorial(n - p));

    // Resultados
    printf("Arranjo A(%d, %d) = %llu\n", n, p, arranjo);
    printf("Combinação C(%d, %d) = %llu\n", n, p, combinacao);

    return 0;
}
