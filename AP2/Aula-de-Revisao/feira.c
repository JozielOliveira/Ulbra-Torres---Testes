#include <stdio.h>
float main(){
  int   apple;
  int   morango;
  float ValorApple;
  float ValorMorango;
  float Total;
  printf("\nQuantos Kg de Apple: ");
  scanf("%i",&apple);
  printf("\nQuantos Kg de Morango: ");
  scanf("%i",&morango);

  if (apple>5) {
    ValorApple = 2 * apple;
  }else{
    ValorApple = 3 * apple;
  }
  if (morango>5) {
    ValorMorango = 4 * morango;
  }else{
    ValorMorango = 5 * morango;
  }

  Total = ValorMorango + ValorApple;

  if ( (apple+morango > 8)||(Total>35)) {
    Total = Total*0.8;
  }
  printf("\nTotal: %f", Total);
  printf("\nApple: %f", ValorApple);
  printf("\nMorango: %f", ValorMorango);
}
