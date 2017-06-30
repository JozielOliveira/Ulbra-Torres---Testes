algoritmo "Atividade 9"
// Data : 18/04/2017
var
  m,Cmaior,Cmenor: real
inicio
  Cmaior<-1
  Cmenor<-1.3
  Escreva("Quantas maçã: ")
  leia(m)
  Se m >= 12 entao
     Escreva("R$",m*Cmaior)
  Senao
     Escreva("R$",m*Cmenor)
  FimSe
fimalgoritmo
