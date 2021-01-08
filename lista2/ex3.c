#include <stdio.h>
#include <math.h>

int num_divisores(int n) {
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }

    int divisores = 2;
    int fim = (int)floor(sqrt(n)) + 1;

    for (int i = 2; i < fim; i++) {
        if (n % i == 0) {
            if (n/i == i) {
                divisores++;
            } else {
                divisores += 2;
            }
        }
    }
    return divisores;
}

int main () {
    int num;
    printf("Numero: ");
    scanf("%i", &num);
    printf("%i possui %i divisores.", num, num_divisores(num));

    return 0;
}
