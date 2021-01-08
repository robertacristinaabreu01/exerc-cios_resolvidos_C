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

void print_sum_n_primes(int n) {
    int soma = 0;
    int count = 1; 
    int i = 2;

    while (count <= n) {
        
        if (is_prime(i)) {
            printf("%i", i);
            if (count != n) {
                printf(" + ");
            }
            soma += i;
            count++;
        }
        i++;
    }
    printf(" = %i", soma);
}

int main() {
    int n;
    printf("Numero: ");
    scanf("%i", &n);

    print_sum_n_primes(n);
    
    return 0;
}
