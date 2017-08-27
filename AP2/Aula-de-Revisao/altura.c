#include <stdio.h>
float main(){
  float altura = 0;
  float Altura = 0;
  float media  = 0;
  int cont     = 0;
  int cond;

  do {
    printf("\nAltura: ");
    scanf("%f",&altura);
    Altura = Altura + altura;
    cont++;
    media = Altura/cont;

    printf("\nQuer continuar  sim[1] nao[0]? ");
    scanf("%i",&cond );

  } while(cond != 0);

  printf("%.2f",media);
}
