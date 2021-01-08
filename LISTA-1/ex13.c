#include <stdio.h>

int main(){
  int n;
  printf("Digite o valor de n: ");
  scanf("%d", &n);
  printf("Os %d primeiros números ímpares são:\n", n);

  int i = 1;
  while (n){
    printf("%d\n", i);
    i = i + 2;
    n = n - 1;
  }
  return 0;
}