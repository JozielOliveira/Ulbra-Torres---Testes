algoritmo "Atividade 16"
// Data : 12/04/2017
var
  TS:inteiro
  SX,CF:caracter
  Sal,B:real
inicio
      Escreva("Código do Funcionário: ")
      leia(CF)
      Escreva("Sexo do Funcionário(M ou F): ")
      leia(SX)
      Escreva("Tempo de Serviço: ")
      leia(TS)
      Escreva("Salário: ")
      leia(Sal)
      Se TS>10 entao
         Se SX = "M" entao
            Se TS>15 entao
               Sal<-Sal*1.2
            Senao
               Sal<-Sal+100
            FimSe
         Senao
            Sal<-Sal*1.25
         FimSe
       Senao
         Sal<-Sal+100
       FimSE
       Escreval("Funcionário: ",CF)
       Escreval("Salário: R$",Sal)
fimalgoritmo
