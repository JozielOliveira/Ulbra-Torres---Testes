#include <stdio.h>
float main(){

  int Soma;
  int vet[10];

  for (int i = 0; i < 10; i++) {
    printf("\nEscreva um numero inteiro: ");
    scanf("%i",&vet[i]);
    if (vet[i] <= 0) {
      break;
    }
  }

  for (int i = 0; i < 10; i++) {
      if (vet[i]>5) {
        Soma+= vet[i];
      }
  }
  printf("\nTotal da soma: %i", Soma);
}
