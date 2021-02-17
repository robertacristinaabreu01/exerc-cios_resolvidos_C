//Escreva um programa que converta uma temperatura digitando em graus Celsius
//e converta para graus Fahrenheit.(celsius * 9/5)+32

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"");

    float Fah, Cel;

    printf("Digite o valor em Celsius: ");
    scanf("%f",&Cel);

    Fah = (Cel * 9 / 5)+32;

    printf("De %2.f Celsius será %2.f Fahrenheit ", Cel, Fah);

    return 0;
}
