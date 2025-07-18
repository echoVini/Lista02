#include <stdio.h>
#include <stdlib.h>

// Função para verificar se o ano é bissexto
int anoBissexto(int ano) {
    return (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);
}

// Função que retorna a quantidade de dias no mês
int diasNoMes(int mes, int ano) {
    switch(mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return anoBissexto(ano) ? 29 : 28;
        default:
            return 0; // mês inválido
    }
}

// Converte data para número de dias desde 01/01/0000
long dataParaDias(int dia, int mes, int ano) {
    long totalDias = 0;

    // Soma os dias dos anos completos anteriores
    for (int i = 0; i < ano; i++) {
        totalDias += anoBissexto(i) ? 366 : 365;
    }

    // Soma os dias dos meses completos anteriores do ano atual
    for (int i = 1; i < mes; i++) {
        totalDias += diasNoMes(i, ano);
    }

    // Soma os dias do mês atual
    totalDias += dia;

    return totalDias;
}

int main() {
    int d1, m1, a1, d2, m2, a2;

    printf("Digite a primeira data (dd mm aaaa): ");
    scanf("%d %d %d", &d1, &m1, &a1);

    printf("Digite a segunda data (dd mm aaaa): ");
    scanf("%d %d %d", &d2, &m2, &a2);

    // Converter datas em dias
    long dias1 = dataParaDias(d1, m1, a1);
    long dias2 = dataParaDias(d2, m2, a2);

    long diff = labs(dias2 - dias1); // diferença absoluta

    printf("A diferença entre as datas é: %ld dia(s)\n", diff);

    return 0;
}
