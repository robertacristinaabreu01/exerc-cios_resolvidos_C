#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b, result;

  printf ("Digite o primeiro número: \n");
  scanf ("%d", &a);
  printf ("Digite o segundo número: \n");
  scanf ("%d", &b);
  result = a + b;
  printf("O resultado e : %d\n", result);
  return 0;
}