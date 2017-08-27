#include <stdio.h>
main(){
 float  comando  = 0;
 float  soma_pos = 0;
 int    cont_neg = 0;
 
  do {
    printf("\nDigite um numero: ");
    scanf("%f",&comando );
    if (comando != 0) {
        if (comando < 0) {
          cont_neg++;
        }else{
          soma_pos  = soma_pos + comando;
        }
    }
  } while(comando != 0);

  printf("Quantia de negativos: %i",cont_neg);
  printf("\nSoma de positivos: %.1f",soma_pos);

}
