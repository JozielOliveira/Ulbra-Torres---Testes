algoritmo "Atividade 10"
// Data : 18/04/2017
var
  Conta:inteiro
  SA,S,D,C:real
inicio
      Escreva("Numero da Conta: ")
      leia(Conta)
      Escreva("Saldo: ")
      leia(S)
      Escreva("Débito: ")
      leia(D)
      Escreva("Crédito: ")
      leia(C)
      SA<- S-D+C
      Se SA>=0 entao
         Escreval("Saldo Positivo")
         Escreval("R$",SA)
      Senao
         Escreval("Saldo Negativo")
         Escreval("R$",SA)
      FimSE
fimalgoritmo
