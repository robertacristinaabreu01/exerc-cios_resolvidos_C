//01. Escreva um programa principal que:
//a) Leia 10 números (vetor inteiros) a partir de valores digitados pelo usuário.
//b) Imprima na tela os 10 números.
#include <stdio.h>

int main()
{
    int  vet[10],i;

    for (i=0; i< 10; i++)
    {
        printf ("\ndigite o numero %d :\t", i+1 );
        scanf("%d", &vet[i]);

    }

    for (i=0; i< 10; i++)
    {
        printf( " %d ", vet[i]);
    }
    return 0;
}
