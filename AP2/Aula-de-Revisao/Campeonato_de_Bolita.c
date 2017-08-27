#include <stdio.h>
float main(){

  for (int i = 0; i < 10; i++) {

      int mensagem = 0 ;
      float altura ;
      float peso ;

      printf("\n Peso: ");
      scanf("%f",&peso);
      printf("\nAltura: ");
      scanf("%f",&altura);

      if ((peso >= 70)&&(peso <= 80)) {
          printf("\nOK1");
        mensagem = mensagem+1;
      }else{
          printf("\nOK2");
        mensagem = mensagem+2;
      }
      if ((altura >= 1.75)&&(altura <= 1.9)) {
          printf("\nOK3");
        mensagem = mensagem + 1;
      }else{
          printf("\nOK4");
        mensagem = mensagem+3;
      }

      switch (mensagem) {
        case 2 : printf("\nAceito");
        break;
        case 3 : printf("\nRecusado por peso");
        break;
        case 4 : printf("\nRecusado por altura");
        break;
        default: printf("\nTotalmente recusado");
      }
      printf("\nOK");

  }

}
