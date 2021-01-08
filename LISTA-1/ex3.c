#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int a, quad;
  printf("Digite um número inteiro: \n");
  scanf("%d", &a);
  quad = pow(a,2);
  printf("Quadrado = %d\n", quad);
  system("pause");
  return 0;
}