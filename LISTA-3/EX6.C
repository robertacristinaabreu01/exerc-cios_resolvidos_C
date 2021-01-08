//06. Dada uma sequência de n números, imprimi-la na ordem inversa a da leitura.

#include <stdio.h>

int bin_to_dec(int bin)
{
    int total  = 0;
    int potenc = 1;

    while(bin > 0)
    {
        total += bin % 10 * potenc;
        bin    = bin / 10;
        potenc = potenc * 2;

    }

    return total;
}

int main(void)
{
    int dec = 0;
    int bin = 0;

    printf("Entre com um inteiro (0's e 1's): ");
    scanf("%d", &bin);

    dec = bin_to_dec(bin);

    printf("Bin = %d - Dec = %d\n", bin, dec);

    return 0;
}

















//int main()
//{
   // int a, b;
    //int Numeros[5];
    //for (a = 0;a<5;a++)
    //{
    //printf("Digite um numero\n");
   // scanf("%d", &Numeros[a]);
   // printf("\n");
   // fflush(stdin);
    //}
   // for (b = 4; b >= 0; b--)
   // {
     //   printf("%d\n", Numeros[b]);
   // }
   // return 0;
//}
