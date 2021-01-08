//03. Escreva um programa principal que:
//a) Leia 10 números (vetor de inteiros ) a partir de valores digitados pelo usuário, apenas armazene no vetor os números pares: Obs: os valores devem ser armazenados em  posições consecutivas. 
//b) Imprima na tela a quantidade de valores armazenados no vetor(item a), o maior valor encontrado e também a média desses valores.
//Entradas e Saídas para ajudar nos testes:
//a)	Exemplo: Valores digitados pelo usuário: 1,2,3,4,5,10,30,20,40,2.
//b)	Quant de Valores armazenados: 7. O maior valor encontrado:40. Média:15,4.

#include <stdio.h>

int main()
{
    int  vet[10],i, vetPar[i], maior;

    float media, soma = 0;

    printf ("\n digite os números\n");
    for (i=0; i< 10; i++)
    {
        scanf("%d", &vet[i]);
    }
    for(i=0; i<10; i++)
    {
        if(vet[i]>maior)
        {
            maior=vet[i];
        }
    }

    for(i = 0; i < vet[i]; i++)
    {
        soma = soma + vet[i];
    }

    printf("\n Quantidade de valores armazenados: %d", i - 1);
    printf("\n Maior valor encontrado: %d", maior);
    printf("\n Média será de : %.2f", (soma / i));
    return 0;
}

