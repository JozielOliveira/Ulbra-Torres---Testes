algoritmo "semnome"

var
  A,B,C,So,Su,M,T:inteiro
inicio
  Escreva("Escreva o valor de A: ")
  leia(A)
  EScreva("Escreva o valor de B: ")
  leia (B)
  Escreva("Escreva o valor de C: ")
  leia (C)
  M<-A*B*C
  So<-A+B+C
  Su<-A-B-C
  T<-M+So+Su
  Escreval(A,"*",B,"*",C,"=",M)
  Escreval(A,"+",B,"+",C,"=",So)
  Escreval(A,"-",B,"-",C,"=",Su)
  Escreval(M,"+",So,"+(",Su,")=",T)

fimalgoritmo
