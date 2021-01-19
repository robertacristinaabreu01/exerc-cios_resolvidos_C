//Faça um programa que leia a largura e a altura de uma parede em metros,
//calcule a sua área e a quantidade de tinta necessária para pintá-la, sabendo que cada litro,
//pinta uma área de 2m²

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
    printf("Você precisará de %.2f litros de tinta para area de %.2f m² ", tinta, area);

    return 0;
}
