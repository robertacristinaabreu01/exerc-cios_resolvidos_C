//#crie um programa que leia 2 números e faça a soma entre eles

#include<stdio.h>

int main()
{

    int num1, num2, soma;

    printf("Digite o primeiro numero: ");
    scanf("%d",&num1);

    printf("Digite o segundo numero: ");
    scanf("%d",&num2);

    soma = num1 + num2;

    printf("A soma de %d com %d sera : %d", num1, num2, soma);


    return 0;
}
