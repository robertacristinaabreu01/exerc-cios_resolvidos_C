#include <stdio.h>
#include <stdlib.h>

int e_par (int n){
  return n % 2 == 0; }

  int main(){
    int x;
    printf ("Digite um número inteiro:\n");
    scanf("%d", &x);

    if (e_par(x)) printf("Esse número é par!\n ");
    else printf ("Esse número é impar!\n");

    system("pause");
    return 0;
  }