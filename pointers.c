#include <stdio.h>

int main() {
    int age = 19;
    int* agePointer = &age;

    printf("%d\n", age);
    printf("%p\n", &age);
    printf("%p\n", agePointer);
    printf("%d\n", *agePointer);

    return 0;
}