//08.  Inicialize um vetor de 10 posições e em seguida leia um valor X qualquer. Seu programa devera fazer uma busca do valor de X no vetor lido e informar a posição em que foi encontrado ou se não foi encontrado.
    // Exemplo: int vetor[10] = {2,5,4,54,43,22,5,9,30,15};
#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale (LC_ALL, "Portuguese");
    int vetor [10]= {2,5,4,54,43,22,5,9,30,15};

    int x;
    printf("Digite um número para encontrar no vetor: ");
    scanf("%d", &x);

    int i, ind = -1;
    for (i = 0; i <10 ; i++)
    {
        if(vetor [i] == x)
        {
            ind = i;
            break;
        }
    }
    if (ind == -1)
        printf("O número %d não existe no vetor !!! \n",x);
    else
        printf("O número %d foi encontrado na posição [%d] do vetor \n", x, ind);
    return 0;
}