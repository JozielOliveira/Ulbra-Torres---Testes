#include <stdio.h>
float main(){
  int A[10];
  int X;
  int con = 0;
  for (int i = 0; i < 10; i++) {
    printf("\nDigite um numero inteiro: ");
    scanf("%i",&A[i]);
  }

  do {

    printf("\nDigite um numero que esteje no vetor: ");
    scanf("%i",&X);
    for (int i = 0; i < 10; i++) {
      if (A[i] == X) {
        con = 0;
        printf("\nAchei\n");
        break;
      }else{
        con = 1;
      }
    }

    if (con == 1) {
      printf("\nNão achei\n");
    }

  } while(con);

}
