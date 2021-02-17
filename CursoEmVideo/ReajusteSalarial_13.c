// Faça um algoritmo que leia o salário de um funcionário e mostre seu novo salário, com 15% de aumento.

#include<stdio.h>
#include<locale.h>

void main () {
    setlocale(LC_ALL, "");

    float sal, desc, total;

    printf("Digite o valor do salário: ");
    scanf("%f",&sal);

    desc = (sal * 15)/100;
    total = sal + desc;

    printf("O salário de %2.f terá um acréscimo de %2.f então seu salário de %2.f ", sal, desc, total);

    return 0;

}
