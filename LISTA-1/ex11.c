#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main (){
  int x;
  printf("\n \t Calculo dos quadrados de uma sequencia de números \n \n");
  printf("Entre com uma sequência de números inteiros não nulos seguida por 0:\n");

  while ( x != 0){
     scanf("%d", &x);
     printf("O quadrado de %d é %d\n", x, (x * x));
  }
    return 0;
}