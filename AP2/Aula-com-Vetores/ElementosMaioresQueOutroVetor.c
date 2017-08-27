#include <stdio.h>
float main(){

  int A[10];
  int S[10];
  int X;
  int cont = 0;

  for (int i = 0; i < 10; i++) {

    printf("\nEscreva um numero inteiro: ");
    scanf("%i",&A[i]);
  }

  printf("\nEscreva um numero inteiro para 'X': ");
  scanf("%i",&X);

  for (int i = 0; i < 10; i++) {
    if (A[i]>X) {
      S[cont] = A[i];
      cont++;
    }
  }
  for (int i = 0; i < cont; i++) {
    printf("%i", S[i] );
  }
}
