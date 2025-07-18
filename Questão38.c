#include <stdio.h>
#include <stdbool.h>

// Função para verificar se um número é primo
bool ehPrimo(int num) {
    if (num < 2) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;

    for (int i = 3; i*i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    unsigned long long produto = 1;
    int inicio = 92;
    int fim = 1478;
    int countPrimos = 0;

    for (int i = inicio; i <= fim; i++) {
        if (ehPrimo(i)) {
            countPrimos++;
            // Aviso sobre overflow:
            if (produto > 0xFFFFFFFFFFFFFFFFULL / i) {
                printf("Produto ultrapassa limite de unsigned long long. Parando cálculo.\n");
                break;
            }
            produto *= i;
        }
    }

    printf("Quantidade de primos entre %d e %d: %d\n", inicio, fim, countPrimos);
    printf("Produto dos números primos encontrados (até o limite): %llu\n", produto);

    return 0;
}
