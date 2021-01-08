#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main (){
  int age, year, atual;

  printf("Digite o ano de seu nascimento:\n");
  scanf("%d",&age);
  printf("Digite o ano atual: \n");
  scanf("%d",&atual);
  year = atual - age;

  printf("Sua idade em %d será de %d anos:", atual, year);
}