#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

//função principal do programa
void main(){

      setlocale(LC_ALL,"");
    //definindo variáveis
    int a = 5, b = 3;
    int soma, menos, multi, resto;
    float divi,pot,raiz, raizA, raizB;

    //soma
    soma = a+ b;

    //menos
    menos = a- b;

    //multiplicação
    multi = a *b;

    //divisão
    divi = a / b;

    //potência
    pot = pow(a,b);

    //raiz
    raizA = sqrt (a);
    raizB = sqrt (b);

    //resto
    resto = a % b;

     printf("A soma de %d e %d = %d \n",a,b,soma);
     printf("A diferença de %d e %d = %d\n",a,b, menos);
     printf("A multiplicação de %d e %d = %d\n",a,b,multi);
     printf("A divisão de %d e %d = %2.f\n",a,b, divi);
     printf("A potência %d e %d = %2.f\n",a,b, pot);
     printf("A raiz de %d e %d = %2.f e %2.f\n",a,b,raizA,raizB);
     printf("O resto da divisão de %d e %d = %d\n",a,b,resto);

    //Pausa o programa após executar
    system("pause");
}
