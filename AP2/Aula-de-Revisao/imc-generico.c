#include <stdio.h>
float main(){
  
    float altura;
    int sexo;
    float IMC;

  do {

    printf("\nAltura: ");
    scanf("%f",&altura);

    if (altura == 0) {
      break;
    }

    printf("\nSexo F[1]M[2]: ");
    scanf("%i", &sexo);

    if (sexo == 1) {
      IMC = (62.1*altura)-44.7;
    } else if (sexo == 2) {
      IMC = (72.7 * altura)-58;
    }

    printf("\n Peso ideal: %f \n",IMC);

  } while( IMC != 0);
}
