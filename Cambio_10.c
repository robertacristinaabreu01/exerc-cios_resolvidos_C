//Crie um programa que leia quanto dinheiro uma pessoa tem na carteira
//e mostre quantos doláres ela pode comprar.
//cambio => USS1.00 = R$3.27

#include<stdio.h>
#include <math.h>

int main()
{
    double valor, cambio;
    float taxa = 3.27;
    printf("Digite o valor que deseja trocar em dollar: ");
    scanf("%lf",&valor);

    cambio = valor / taxa;

    printf("O valor de %.2lf em reais será convertido em %.2lf dollares.", valor, cambio);
    return 0;
}
