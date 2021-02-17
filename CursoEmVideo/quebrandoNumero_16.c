//crie um programa que leia um número real qualquer pelo teclado e mostre na tela a sua porção inteira.
//digite um número:6.127 sendo 6 a parte inteira

#include<stdio.h>
#include<math.h>

void main(){

float real;

printf("Digite um valor real: ");
scanf("%f", &real);

printf("A parte inteira será %2.f ",floor(real) );

return 0;
}
