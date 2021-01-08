#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int main (void){
  int opcao = 0;
  int n1, n2;
  printf("Opções:\n\n (1)...Divisão\n (2)...Resto da Divisão\n (3)...Adição\n (0)...Sair\n");
  do{
    printf("\n Entre com uma das opções:");
    scanf("%d",&opcao);
    if( opcao == 1 || opcao ==2){
    printf("\nPrimeiro número:");
    scanf("%d", &n1);
    printf("Segundo número: ");
    scanf("%d", &n2);
    if (n2 == 0){
      printf("\n O segundo número não pode ser zero, digite outro: ");
      scanf("%d", &n2);
      }
    }

    if (opcao == 3 || opcao == 4){
      printf("Primeiro número: ");
      scanf("%d",&n1);
      printf("Segundo número: ");
      scanf("%d", &n2);
    }

    switch(opcao){
      case 1:
      printf ("\n %d / %d = %d\n", n1, n2, (n1/n2));
      break;
      case 2:
      printf ("\n A divisão de %d por %d tem resto %d\n", n1, n2, (n1%n2));
      break;
      case 3:
      printf ("\n %d + %d = %d \n", n1, n2, (n1+n2));
      break;
      case 4:
      printf ("\n %d * %d = %d\n", n1, n2,(n1*n2));
      break;
      default:
       if (opcao == 0){
        printf("\n Você escolheu SAIR! \n");
      }else 
        printf("\n Digite uma opção válida !!! \n");
    }
       
  }while (opcao != 0);
  return 0;
}

