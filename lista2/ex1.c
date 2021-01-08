#include <stdio.h>

int is_prime(int n) {
    if (n < 2) {
        return 0;
    }

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main () {
    int num;
    printf("Número: ");
    scanf("%i", &num);
    if (is_prime(num) == 0) {
        printf("%i nao eh primo!", num);
    } else {
        printf("%i eh primo!", num);
    }
}
