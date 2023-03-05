#include <stdio.h>

int main() {
    int numero_secreto = 42;
    int numero_selecionado;

    printf("Qual eh o numero secreto? ");
    scanf("%d", &numero_selecionado);

    if (numero_selecionado == numero_secreto) {
        printf("Voce acertou!");
    } else {
        printf("Voce errou!");
    }

    return 0;
}