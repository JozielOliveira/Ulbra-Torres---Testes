#include <stdio.h>
float main(){
  
  float Salario;
  float SalarioLiquido;
  float HorasExtras;
  float LimiteINSS;

  for ( int i=0 ; i<500 ; i++ ) {

    printf("\nSalario: ");
    scanf("%f",&Salario );

    printf("\nHoras Extras: ");
    scanf("%f",&HorasExtras);

    HorasExtras = (Salario/176)*HorasExtras*1.5;
    LimiteINSS = (Salario+HorasExtras) * 0.10;

    if (LimiteINSS > 150) {
        LimiteINSS =  150;
    }

    SalarioLiquido = Salario - LimiteINSS + HorasExtras;

    printf("\nSalario liquido = %.2f",SalarioLiquido );
    printf("\nHoraExtra = %.2f",HorasExtras );
    printf("\nINSS = %.2f",LimiteINSS );


    if(validacao()){
        break;
    }
  }

}

int validacao(){

      int Condicao;

      do {
        printf("\n Quer continuar[S(1)N(0)]? ");
        scanf("%i",&Condicao);

      } while((Condicao != 1)&&(Condicao != 0));

      if ((Condicao == 1)) {
        return 0;
      } else {
        return 1;
      }
}
