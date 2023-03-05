#include <stdio.h>

int main() {
    char name[40];
    int age;

    printf("Qual eh o seu nome? ");
    scanf("%s", &name);

    printf("Qual eh a sua idade? ");
    scanf("%d", &age);

    printf("Saudacao gerada com sucesso!\n");
    printf("\"Ola, o meu nome eh %s e eu tenho %d anos.\"", name, age);
}