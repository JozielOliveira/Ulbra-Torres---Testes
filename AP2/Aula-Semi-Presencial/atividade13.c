#include <stdio.h>
float main(){
  int Ind[10];
  int A[10];
  int X;
  int cont = 0;

  for (int i = 0; i < 10; i++) {
    printf("\nEscreva um numero inteiro: ");
    scanf("%i",&A[i]);
  }
  printf("\nEscreva um numero para 'X': ");
  scanf("%i",&X);
  for (int i = 0; i < 10; i++) {
    if (A[i] == X) {
      Ind[cont] = i;
      cont++;
    }
  }
  printf("\nIndices igual 'X':");
  for (int i = 0; i < cont; i++) {
    printf("%i - ",Ind[i]);
  }
}
