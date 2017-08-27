#include <stdio.h>
float main(){
  float altura;
  float Maior = 0;
  float Menor = 10;
  float Media;
  float Feminino;
  int sexo;
  int cont = 0;

  for (int i = 0; i < 10; i++) {
    printf("\nAltura:");
    scanf("%f",&altura);
    printf("\nSexo M[1]F[2]:  ");
    scanf("%i",&sexo);

    if (sexo = 2) {
      cont++;
      Feminino = Feminino + altura;
      Media = Feminino/cont;
    }
    if (altura>Maior) {
      Maior = altura;
    }else if(altura<Menor){
      Menor = altura;
    }
  }
  
  printf("\nMedia de Altura da Mulheres: %.2f",Media);
  printf("\nMaior altura: %.2f",Maior);
  printf("\nMenor altura: %.2f",Menor );
}
