//Esta função armazena tudo que foi digitado, inclusive os espaços, até que a tecla ENTER seja pressionada.

#include<stdio.h>
#include<conio.h>

int main(){
    char nome[60];

    printf("Digite seu nome: ");
    gets(nome);

    printf("Seja bem vinda (o) %s", nome);

    getch();
    return 0;
}
