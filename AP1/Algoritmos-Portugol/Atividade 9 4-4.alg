algoritmo "semnome"

var
 P,I,R:real
inicio
  I<-0.45
  R<-0.28
  Escreva("Escreva o pre�o de f�brica: ")
  leia(P)
  P<-P+P*I+P*R
  Escreva ("O produto custar� R$",P)
fimalgoritmo
