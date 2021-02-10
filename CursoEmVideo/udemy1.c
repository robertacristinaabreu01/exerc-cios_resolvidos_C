#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    //imprime Olá
    printf("Olá \n");

    //Lendo valor inteiro
    int a = 50;
    printf("O valor de a é = %d", a);
    scanf("%d", &a);
    printf("O valor de a mudou para %d", a);

    //Lendo valor quebrado
    float b = 5.5;
    printf("O valor de b é = %f \n", b);
    scanf("%d", &b);
    printf("O valor de a mudou para %f", b);

    //Lendo letra
    char letra = 't';
    printf("O valor de c é =%c \n", letra);
    //limpar o buffer antes de usar char
    fflush(stdin);
    scanf("%c", &letra);
    printf("O valor de c mudou para %c", letra);


}
