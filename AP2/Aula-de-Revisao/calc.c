#include <stdio.h>
float main(){
  int num1;
  int num2;
  int operacao;
  float result;

  printf("\nEscreva um numero inteiro: ");
  scanf("%i",&num1);
  printf("\nEscreva um numero inteiro: ");
  scanf("%i",&num2);

  do {
    printf("\n1-somar\n2-subtrair\n3-multiplicar\n4-dividir\n");
    scanf(" %i",&operacao);
  } while(operacao<1 || operacao>4);

  switch (operacao) {
    case 1: result = num1 + num2;
    break;
    case 2: result = num1 - num2;
    break;
    case 3: result = num1 * num2;
    break;
    default: result = num1 / num2;
    break;
  }

  printf("\n%.2f",result);
}
