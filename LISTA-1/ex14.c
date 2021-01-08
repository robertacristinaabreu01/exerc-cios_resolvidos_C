#include<stdio.h>
#include<math.h>

int main(){
  int x, n;
  printf("Digite um número inteiro: ");
  scanf("%d", &x);
  printf("Digite um número inteiro não-negativo: ");
  scanf("%d",&n);

  int aux = pow(x,n);

  printf("O valor de %d elevado a %d é : %d\n\n", x, n, aux);

  return 0;
}