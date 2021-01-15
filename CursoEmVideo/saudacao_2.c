//faça um programa que leia o nome de uma pessoa e mostre uma mensagem de boas-vindas.

#include <stdio.h>
#include<conio.h>

int main(void)
{
    char nome[50];

    printf("Digite seu nome: ");
    scanf("%s",nome);

    printf("Boas vindas a %s", nome);

    return 0;
}

