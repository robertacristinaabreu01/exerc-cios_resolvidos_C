#include <stdio.h>

int main (){
  int n, i;
  int soma = 0;
  printf("\n\t Calculo dos n primeiros números naturais\n\n");
  printf("Digite o valor de n: ");
  scanf("%d",&n);

  for (i = 0; i <= n; i++) {
    soma = soma + i;
  }

printf("Soma dos %d primeiros números naturais é %d \n\n", n, soma);

return 0;
}