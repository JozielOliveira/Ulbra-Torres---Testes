#include <stdio.h>
float main(){

  int Total;
  int dias;
  int ValorDiaria;

  ValorDiaria = validacao();
  printf("\nQuantos dias: ");
  scanf("%i",&dias);
  Total = dias * ValorDiaria;

  printf("\nValor Total: %i",Total);
}
int validacao(){
      int cont= 0;
      int Condicao = 0;

      do {
        if (cont>=1) {
          printf("\nTipo de Quarto inválido\n");
        }
        printf("\n1 - Suíte = R$,00\n2 - Quarto de luxo\n3 - Quarto conjugado\n4 - Quaro Standart\n");
        scanf("%i",&Condicao);
        cont++;
      } while((Condicao != 1)&&(Condicao != 2)&&(Condicao != 3)&&(Condicao != 4));

      switch (Condicao) {
        case 1: return 180;
        break;
        case 2: return 150;
        break;
        case 3: return 130;
        break;
        default: return 100;
      }
}
