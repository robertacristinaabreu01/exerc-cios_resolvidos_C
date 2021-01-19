//Crie um algoritmo que leia um número e mostre o seu dobro,
//triplo e raiz quadrada


#include<stdio.h>

int main()
{
    int num, dobro, triplo;
    printf("Digite o numero que deseja saber o dobro e o triplo: ");
    scanf("%d",&num);

    dobro = num * 2;
    triplo = num * 3;

    printf("Analisando o numero %d, encontramos o dobro  = %d e o triplo = %d", num, dobro, triplo);
    return 0;

}
