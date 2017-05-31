algoritmo "Atividade 14"
// Data : 11/04/2017
var
  C:caracter
  V:real
inicio
  Escreva("Cliente(Comum(C) ou Especial(E) ou Funcionario(F)): ")
  leia(C)
  Escreva("Escreva o valor da compra: ")
  leia(V)
  Se C = "E" entao
     Escreva("Total: R$",V*0.9)
  Senao
   Se C="F" entao
      Escreva("Total: R$",V*0.95)
   Senao
      Escreva("Total: R$",V)
   FimSe
  FimSe
fimalgoritmo
