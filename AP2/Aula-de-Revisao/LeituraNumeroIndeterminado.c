#include <stdio.h>
float main(){

    int  numero = 0;
    int  Impar = 0;

    for (int i = 0; i < 100; i++) {
      printf("\nDigite um numero: ");
      scanf("%i",&numero);
      if (numero == 0) {
        break;
      }
      if ((numero % 2)==1) {
        Impar += numero;
      }
    }

    printf("%i",Impar );

}
