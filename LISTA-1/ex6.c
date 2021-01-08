#include <stdio.h>
#include <stdlib.h>

int main(){
  int x, y, z, troca;

    printf("Digite o primeiro número inteiro:\n ");
    scanf("%d",&x);

    printf ("Digite o segundo número inteiro:\n ");
    scanf("%d", &y);

    printf("Digite o terceiro número inteiro:\n");
    scanf("%d", &z);

    if (x > y){
          troca = y;
          y = x;
          x = troca;
    }if (y > z){
          troca =z;
          z=y;
          y = troca;
    }if (x > y){
          troca = y;
          y = x;
          x = troca;
    }
printf("\n%d , %d, %d\n\n", x,y,z);
system("Pause");
return 0;
}