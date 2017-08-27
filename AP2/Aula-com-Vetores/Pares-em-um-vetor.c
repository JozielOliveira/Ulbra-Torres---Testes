#include <stdio.h>
float main(){
  int par;
  int vet[20];

  for (int i = 0; i < 20; i++) {
    printf("\nDigite um numero inteiro: ");
    scanf("%i", &vet[i] );
  }

  for (int i = 0; i < 20; i++) {
    if ((vet[i] % 2) == 0) {
      par++;
    }
  }

  printf("%i numeros pares", par);
}
