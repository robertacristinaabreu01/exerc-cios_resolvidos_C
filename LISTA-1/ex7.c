#include <stdio.h>
#include <stdlib.h>

float fatorial (float x) {
  if (x == 0)return 1;
  else return x * fatorial (x - 1);
}
int main (){
  int x, fat;
  printf("Insira um número = ");
  scanf("%d",&x);

  fat = fatorial(x);

  printf("Fatorial = %4.d\n", fat);

  system("pause");
  return 0;
}
