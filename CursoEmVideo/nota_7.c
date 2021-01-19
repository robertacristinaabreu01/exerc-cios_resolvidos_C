//Desenvolva um programa que leia as duas notas de um aluno, calcule e mostre a sua média.

#include<stdio.h>

int main()
{
    float media, nota1, nota2;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2;
    printf("A media das notas: %.2f e %.2f sera: %.2f", nota1,nota2,media);
    return 0;
}
