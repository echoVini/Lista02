#include <stdio.h>

int main() {
    int anos = 0;
    int alturaChico = 150;  // em centímetros
    int alturaZe = 110;     // em centímetros

    while (alturaZe <= alturaChico) {
        alturaChico += 2;
        alturaZe += 3;
        anos++;
    }

    printf("Serão necessários %d anos para que Zé seja mais alto que Chico.\n", anos);
    return 0;
}
