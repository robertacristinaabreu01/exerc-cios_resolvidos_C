//07. Leia um vetor de 8 posições e troque os 4 primeiros valores pelos 4 últimos e vice e versa. Escreva ao final o vetor obtido.

#include<stdio.h>
#include<locale.h>

void exibe_troca(int med, int*vetor)
{
    int j, k, met = med/2;
    for (j = met; j < med; j++)
    {
        printf("%d", vetor[j]);
    }
    for (k = 0; k < met; k++)
    {
        printf ("%d", vetor[k]);
    }
}

int main ( )
{

    setlocale(LC_ALL, "Portuguese");
    int i, j, k, vetor[8];
    for (i = 0; i < 8; i++)
    {
        printf("Digite o %d número: ", (i + 1));
        scanf("%d", &vetor[i]);
    }
    exibe_troca(8, vetor);

    return 0;
}