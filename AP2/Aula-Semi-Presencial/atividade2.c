#include <stdio.h>
float main(){

  int vetor_1[10];
  int vetor_2[10];
  int vetor_3[10];
  
  for(int i = 0; i < 10; i++ ){
      printf("1-Digite um numero: ");
      scanf("%i",&vetor_1[i]);
  }

  for(int i = 0; i < 10; i++ ){
    printf("2-Digite um numero: ");
    scanf("%i",&vetor_2[i]);
  }

  for(int i = 0; i < 10; i++ ){
    vetor_3[i] = vetor_1[i] * vetor_2[i];
    printf("%i,",vetor_3[i]);
  }
  
  printf("\n");
}