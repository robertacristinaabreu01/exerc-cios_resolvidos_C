// char -> caracter
//signed char -> caractere com sinal
//unsigned char -> Caractere sem sinal
//Int -> Inteiro
//float ->	Ponto flutuante com precis�o simples
//double -> Ponto flutuante com precis�o simples
//long double -> Ponto flutuante com precis�o dupla longo

#include<stdio.h>

int main(void)
{
    //Declara��o de vari�veis
    int n = 10; //atribuindo valor para vari�vel
    float n2 = 6.79; // float � uma vari�vel que possui casas decimais
    char letra = 'a'; // vari�vel tipo caracter
    char frase[10] = "Bom dia!";
    double n3 = 1.23456; // variavel real com precis�o dupla

    int valor1, valor2, soma;

    //Usos do comando printf com diversas vari�veis
    printf("Hello World\n");

    printf("Exibindo o n�mero inteiro %d \n ", n);
    printf("Exibindo um numero real: %f \n ", n2);
    printf("Exibindo o caracter %c \n",letra);
    printf("Exibindo o string %s \n",frase);
    printf("Exibindo variavel do tipo double %f \n", n3);
    printf(" Valores: %d %f %c %s %d \n", n,n2,letra,frase,n3);


    printf("Digite um numero inteiro: ");
    scanf("%d",&valor1);

    printf("Digite um outro inteiro: ");
    scanf("%d",&valor2);

    soma = valor1 + valor2;

    printf("O valor da soma de %d + %d = %d ", valor1, valor2,soma);

    system ("pause"); //somene para windows

    return 0;

}
