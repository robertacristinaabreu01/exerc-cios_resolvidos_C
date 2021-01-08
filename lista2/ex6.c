#include <stdio.h>

int potencia(int x, int z) {
    if (z == 0) {
        return 1;
    }
    return x * potencia(x, z-1);
}

int main () {
    int x, z;
    printf("Digite um numero: ");
    scanf("%i", &x);
    printf("Digite uma potencia: ");
    scanf("%i", &z);

    printf("%i elevado a %i eh: %i", x, z, potencia(x, z));

    return 0;
}
