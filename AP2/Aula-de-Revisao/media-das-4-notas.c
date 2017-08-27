#include <stdio.h>
float main(){
  char NOTA;
  for (int i = 0; i < 10; i++) {

    float Media;
    int prova=0;
    float nota[3];

    do {
      printf("\nNotas %i: ",prova+1);
      scanf("%f",&nota[prova]);
      prova++;
    } while(prova <= 3);

    Media = (nota[0]+nota[1]*2+nota[2]*3+nota[3]*4)/7;

    if (Media >= 9) {
      NOTA = 'A';
    } else if (Media >= 7.5) {
      NOTA = 'B';
    } else if(Media >= 6){
      NOTA = 'C';
    }else{
      NOTA = 'D';
    }

    printf("\nMedia: %c\n",NOTA);
  }
}
