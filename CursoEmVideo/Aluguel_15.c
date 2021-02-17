//Escreva um programa que pergunte a quantidade de Km percorridos por um carro alugado
// e a quantidade de dias pelos quais ele foi alugado. Calcule o preço a pagar, sabendo
// que o carro custa R$60 por dia e R$0,15 por Km rodado.

#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "");

    float km, valorKm, valorTotal, custoKm = (0,15);
    int dias, valorDia, custoDia = 60;


    printf("Quantos Km foram utilizados: ");
    scanf("%f",&km);

    printf("Quantos dias foram utilizados: ");
    scanf("%d",&dias);

    valorDia = dias * custoDia;
    valorKm = km * custoKm;
    valorTotal = valorDia + valorKm;

    printf("O valor pelos dias %d e pelos km %2.f a ser pago será: %2.f",valorDia,valorKm, valorTotal);

    return 0;
}
