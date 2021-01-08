#include <stdio.h>

int fatorial(int n) {
    if (n == 0) {
        return 1;
    }

    return n * fatorial(n -1);
}

int main () {
    int n;
    printf("Digite um numero natural inteiro: ");
    scanf("%i", &n);
    printf("O fatorial de %i eh %i", n, fatorial(n));
    
    return 0;
}
