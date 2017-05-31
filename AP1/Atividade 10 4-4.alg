algoritmo "semnome"
var
 NV,NC,AX:inteiro
 SF,VC,CM:real
inicio
      AX<-0
      Escreva("O numero do vendedor: ")
      leia(NV)
      Escreva("Salário fixo: ")
      leia(SF)
      Escreva("Numero de carros vendidos pelo vendedor ",NV," : ")
      leia(NC)
      Escreva("Quantos porcentos de comisão sobre cada carro: ")
      leia(CM)
      Enquanto NC>AX faca
               Escreva("Valor do do ",AX+1,"° carro: ")
               leia(VC)
               SF<-SF+VC*(CM/100)
               AX<-AX+1
      FimEnquanto
      Escreva("O vendendor ",NV," vai receber R$",SF)
fimalgoritmo
