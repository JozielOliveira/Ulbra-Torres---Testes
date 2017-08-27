#include <stdio.h>
float main(){
  int X[10];
  int Y[10];
  int cont = 0;

  for (int i = 0; i < 10; i++) {
    printf("\nEscreva um numero inteiro: ");
    scanf("%i",&X[i]);
  }

  for (int i = 9; i > -1; i--) {
    Y[cont] = X[i];
    cont++;
  }

  for (int i = 0; i < 10; i++) {
    printf("%i - ", Y[i]);
  }

}
