#include <stdio.h>
float main(){
  int vet [30];
  int menor;

  for (int i = 0; i < 30; i++) {
    printf("\nEscreva um numero inteiro: ");
    scanf("%i",&vet[i]);
  }
  menor = vet[0];
  for (int i = 0; i < 30; i++) {
      if (vet[i] < menor) {
      menor = vet[i];
    }
  }
  printf("\nmenor numero do vetor: %i",menor );
}
