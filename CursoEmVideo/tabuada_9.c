//Crie um programa que leia um numero e imprima a tabuada deste n�mero.

#include<stdio.h>
#include <math.h>

int main()
{
    int tabuada, num;
    printf("Digitea tabuada que deseja: ");
    scanf("%d",&num);

    printf(" %d x %d = %d \n", num, 1, num*1);
    printf(" %d x %d = %d \n", num, 2, num*2);
    printf(" %d x %d = %d \n", num, 3, num*3);
    printf(" %d x %d = %d \n", num, 4, num*4);
    printf(" %d x %d = %d \n", num, 5, num*5);
    printf(" %d x %d = %d \n", num, 6, num*6);
    printf(" %d x %d = %d \n", num, 7, num*7);
    printf(" %d x %d = %d \n", num, 8, num*8);
    printf(" %d x %d = %d \n", num, 9, num*9);
    printf(" %d x %d = %d \n", num, 10, num*10);
    return 0;
}
