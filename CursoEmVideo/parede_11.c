//Fa�a um programa que leia a largura e a altura de uma parede em metros,
//calcule a sua �rea e a quantidade de tinta necess�ria para pint�-la, sabendo que cada litro,
//pinta uma �rea de 2m�

#include<stdio.h>

int main()
{
    float largura, altura, area, tinta;
    printf("Digite a largura da parede: ");
    scanf("%f", &largura);
    printf("Digite a altura da parede: ");
    scanf("%f",&altura);
    area = largura * altura;
    tinta = area /2;
    printf("Voc� precisar� de %.2f litros de tinta para area de %.2f m� ", tinta, area);

    return 0;
}
