algoritmo "semnome"

var
 P,I,R:real
inicio
  I<-0.45
  R<-0.28
  Escreva("Escreva o preço de fábrica: ")
  leia(P)
  P<-P+P*I+P*R
  Escreva ("O produto custará R$",P)
fimalgoritmo
