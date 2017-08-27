#include <stdio.h>
main(){
  int  nota[9][2];
  float media;
  
  for (int i = 0 ; i < 10 ; i++) {
    for (int j = 0; j < 2; j++) {
      printf("\nNota do aluno %i:",i);
      scanf("%i",&nota[i][j] );
    }
  }

  for (int i = 0 ; i < 10 ; i++) {

        media = (nota[i][0]+nota[i][1]*2)/3;

        if (media<7) {
          printf("\n Aluno %i : REPROVADO",i);
        } else {
            printf("\n Aluno %i : APROVADO",i);
        }

  }

}
