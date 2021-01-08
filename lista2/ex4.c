#include <stdio.h>

int is_triangulo(int a, int b, int c) {
    if (a > b + c) {
        return 0;
    }
    if (b > a + c) {
        return 0;
    }
    if (c > a + b) {
        return 0;
    }

    return 1;
}

char* tipo_triangulo(int a, int b, int c) {
    if (a == b && b == c) {
        return "Equilatero";
    }
    if (a == b || a == c || b == c) {
        return "Isósceles";
    }
    return "Escaleno";
}

int main () {
    int a, b, c;
    printf("Digite 3 medidas de lados:\n");
    printf("1 lado: ");
    scanf("%i", &a);
    printf("2 lado: ");
    scanf("%i", &b);
    printf("3 lado: ");
    scanf("%i", &c);

    if (!is_triangulo(a, b, c)) {
        printf("Nao eh um triangulo!");
        return 0;
    }

    printf("O triangulo eh %s!", tipo_triangulo(a, b, c));
    return 0;
}
