#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

//fun��o principal do programa
void main(){

      setlocale(LC_ALL,"");
    //definindo vari�veis
    int a = 5, b = 3;
    int soma, menos, multi, resto;
    float divi,pot,raiz, raizA, raizB;

    //soma
    soma = a+ b;

    //menos
    menos = a- b;

    //multiplica��o
    multi = a *b;

    //divis�o
    divi = a / b;

    //pot�ncia
    pot = pow(a,b);

    //raiz
    raizA = sqrt (a);
    raizB = sqrt (b);

    //resto
    resto = a % b;

     printf("A soma de %d e %d = %d \n",a,b,soma);
     printf("A diferen�a de %d e %d = %d\n",a,b, menos);
     printf("A multiplica��o de %d e %d = %d\n",a,b,multi);
     printf("A divis�o de %d e %d = %2.f\n",a,b, divi);
     printf("A pot�ncia %d e %d = %2.f\n",a,b, pot);
     printf("A raiz de %d e %d = %2.f e %2.f\n",a,b,raizA,raizB);
     printf("O resto da divis�o de %d e %d = %d\n",a,b,resto);

    //Pausa o programa ap�s executar
    system("pause");
}
