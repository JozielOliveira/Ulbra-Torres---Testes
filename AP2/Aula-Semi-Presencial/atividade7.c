#include <stdio.h>
float main(){
    
  int vetor[20];
  int vetor_invert[20];
  int cont = 0;

  for (int i = 0; i < 20; i++) {
    printf("\nEscreva um numero inteiro: ");
    scanf("%i",&vetor[i]);
  }

  printf("Vetor inalterado: \n");
  for (int i = 0; i < 20; i++) {
    printf("%i - ", vetor[i]);
  }

  for (int i = 19; i > -1; i--) {
    vetor_invert[cont] = vetor[i];
    cont++;
  }
  printf("\nVetor alterado:\n");
  for (int i = 0; i < 20; i++) {
    printf("%i - ", vetor_invert[i]);
  }

}