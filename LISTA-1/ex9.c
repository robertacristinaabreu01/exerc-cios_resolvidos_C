#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    int x, aux;
    int i = 0;
    printf ("Entre com o valor:  ");
    scanf("%d",&x);

    aux = abs(x);

    while (i < 11) {
      printf("%d X %d = %d \n", aux, i, (aux*i));
      i++;
  }
system ("pause");
return 0;
}