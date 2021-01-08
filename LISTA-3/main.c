//11. Durante uma corrida de automóveis com N voltas de duração foram anotados para um piloto, na ordem, os tempos registrados em cada volta. Fazer um programa em
//C para ler os tempos das N voltas, calcular e imprimir:
//a. melhor tempo;
//b. a volta em que o melhor tempo ocorreu;
//c. tempo médio das N voltas;

#include<stdio.h>
#define MAX 100

int main(){
    int vetor [MAX];
    int n, ctdr, tempo, melhor=10000;
    float total=0.0;

    printf("Número de voltas: \n");
    scanf("%d", &n);

    printf("Tempo de cada volta: \n");
    for (ctdr=0;ctdr<n;ctdr++){
        scanf("%d",&vetor[ctdr]);
        total=total+vetor[ctdr];
        if(melhor>vetor[ctdr]){
            melhor=vetor[ctdr];
            tempo=ctdr+1;
        }
    }
printf("\n Melhor Tempo: %d \n", melhor);
printf("\n Volta em que houve o melhor tempo: %d \n", tempo);
printf("\n Tempo médio de: %d voltas:%2.f \n", n, total );

return 0;
}