#include <stdio.h>
main()
{
  float apples;

  printf("Quantas apples queres comprar? ");
  scanf("%f",&apples );
  if (apples<12) {
    apples=apples*0.3;
    printf("/n %.2f",apples);
  } else {
    apples=apples*0.25;
    printf("/n %.2f",apples);
  }
}
