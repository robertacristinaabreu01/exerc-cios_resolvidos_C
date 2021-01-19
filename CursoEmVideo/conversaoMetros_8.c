//Escreva um programa que leia um valor em metros e o exiba
//convertido em centimetros e milimetros.

#include<stdio.h>

int main()
{
    float metros, cm, mm;
    printf("Digite o valor em metros que deseja converter para centimetros e milimetros: ");
    scanf("%f",&metros);

    cm = metros * 100;
    mm = metros * 1000;

    printf("A conversao de %.2f metros será: %.2f centimentros e %.2f milimetros", metros, cm, mm);
    return 0;
}
