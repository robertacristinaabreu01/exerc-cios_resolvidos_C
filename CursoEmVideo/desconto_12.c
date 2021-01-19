//Faça um algoritmo que leia o preço de um produto e mostre seu novo preço,
//com  25% de desconto.

#include<stdio.h>

int main ()
{
    float preco, desconto, total;
    printf("Digite o valor do produto: ");
    scanf("%f", &preco);
    desconto = preco *0.25 ;
    total = preco - desconto;
    printf("O valor do produto e %.2f , e com desconto de %.2f, ao final irá pagar %.2f", preco, desconto, total);

    return 0;
}
