//04.  Dado um vetor de 5 posições contendo 0 ou 1(base binária), transformá-lo para a base decimal. Criar uma função que recebe esse vetor e retorne o número (base decimal).
      //  Protótipo da função: int transforma_binario_decimal(int vetor[5])

//Exemplo:
//Dado o vetor:
//1	0	0	1	0

//A saída será 18, pois 1. 2 4 + 0. 2 3 + 0. 2 2 + 1. 2 1 + 0. 2 0 = 18. 


#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main()
{
    int bin, dec = 0, i;
    printf("\n Digite o numero binário: \t");
    scanf("%d", &bin);
    for(i = 0; bin > 0; i++)
    {
        dec = dec + pow(2, i) * (bin % 10);
        bin = bin / 10;
    }
    printf("\nO número decimal equivalente a este binário é: \t %d\n", dec);
    return 0;
}