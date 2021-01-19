//Faça um programa que leia um número Inteiro qualquer e mostre na tela a sua tabuada.

#include<stdio.h>
#include<math.h>

#include <stdio.h>

int main ()
{
    int i=0, num=0;

    printf ("Digite um n£mero: ");
    scanf ("%d",&num);

    printf ("\n");

    while ( i <= 9 )
    {
        i++;

        printf ("%d X %d = %d\n", num, i, num*i);
    }

    return 0;
}
