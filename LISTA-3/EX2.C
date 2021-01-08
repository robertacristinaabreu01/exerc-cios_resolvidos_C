//02. Escreva um programa principal que:
//a) Leia 10 números (vetor inteiros) a partir de valores digitados pelo usuário.
//b) Imprima na tela apenas os valores maiores e igual a 20.
//Entradas e Saídas para ajudar nos testes:
//a)	Exemplo: Valores digitados pelo usuário: 1,2,3,4,5,10,30,20,40,2.
//b)	30   20   40
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
        if (vet[i] >= 20)
        {
            printf( " %d ", vet[i]);
        }
    }
    return 0;
}