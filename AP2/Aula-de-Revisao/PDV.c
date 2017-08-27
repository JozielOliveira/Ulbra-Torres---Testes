#include <stdio.h>
float main(){

      float Val_Venda = 0;
      float Val_MedioVendas = 0;
      float Val_MaiorVendas = 0;
      float Val_TotalVendas = 0;
      int Quan_Vendas = 0;

      for (int i = 0; i < 200; i++) {
            printf("\nValor Total da Venda:  ");
            scanf("%f",&Val_Venda);

            if (Val_Venda > Val_MaiorVendas) {
              Val_MaiorVendas = Val_Venda;
            }
            Val_TotalVendas += Val_Venda;


            printf("\nREGISTRADO COM SUCESSO\n");

            if(validacao()){

                Val_MedioVendas = Val_TotalVendas/(i+1);
                Quan_Vendas = i+1;
                break;

            }
      }

      printf("\nQuantias de Vendas: %i",Quan_Vendas);
      printf("\nTotal das Vendas do dia: %.2f", Val_TotalVendas);
      printf("\nValor Medio das vendas: %.2f", Val_MedioVendas);
      printf("\nVenda de maior Venda: %.2f", Val_MaiorVendas\n);


}

int validacao(){

      int Condicao;

      do {
        printf("\n Outra Venda[S(1)N(0)]? ");
        scanf("%i",&Condicao);

      } while((Condicao != 1)&&(Condicao != 0));

      if ((Condicao == 1)) {
        return 0;
      } else {
        return 1;
      }
}
