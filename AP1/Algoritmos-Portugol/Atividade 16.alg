algoritmo "Atividade 16"
// Data : 12/04/2017
var
  TS:inteiro
  SX,CF:caracter
  Sal,B:real
inicio
      Escreva("C�digo do Funcion�rio: ")
      leia(CF)
      Escreva("Sexo do Funcion�rio(M ou F): ")
      leia(SX)
      Escreva("Tempo de Servi�o: ")
      leia(TS)
      Escreva("Sal�rio: ")
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
       Escreval("Funcion�rio: ",CF)
       Escreval("Sal�rio: R$",Sal)
fimalgoritmo
