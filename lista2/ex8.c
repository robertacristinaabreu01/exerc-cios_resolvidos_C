#include <stdio.h>

int is_par(int n) {
    if (n % 2 == 0) {
        return 1;
    }

    return 0;
}

int main () {
    int n;
    printf("Digite um inteiro positivo: ");
    scanf("%i", &n);

    printf("%i", is_par(n));

    return 0;
}
