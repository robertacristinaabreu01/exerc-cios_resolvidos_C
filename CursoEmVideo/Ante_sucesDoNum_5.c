//Faça um programa que leia um número inteiro e mostre na tela o seu sucessor e seu antecessor


#include<stdio.h>

int main(){
    int num1,antes, suces;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);

    antes = num1 -1;
    suces = num1 +1;

    printf("Analisando o numero %d, o seu antecessor sera %d e o sucessor sera %d", num1, antes, suces);


    return 0;

}
