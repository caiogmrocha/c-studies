#include <stdio.h>

// Calculo de fatorial aritmeticamente explicito
int fatorial_old(int number) {
    if (number == 0 || number == 1) {
        return 1;
    } else {
        int i = 1;

        for (int j = 1; j <= number; j++) {
            i *= j;
        }

        return i;
    }
}

// Calculo de fatorial com funcao recursiva
int fatorial(int number) {
    return number > 1 ? fatorial(number - 1) * number : number;
}

int main() {
    int number;

    printf("Qual numero voce quer para calcular o fatorial? ");
    scanf("%d", &number);

    int result = fatorial(number);

    printf("O fatorial de %d eh: %d", number, result);

    return 0;
}