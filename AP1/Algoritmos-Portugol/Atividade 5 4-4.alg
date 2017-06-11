algoritmo "semnome"

var
   A,B,C,MH,MA: real
inicio
   Escreva("Escreva o valor de A: ")
   leia(A)
   Escreva("Escreva o valor de B: ")
   leia(B)
   Escreva("Escreva o valor de C: ")
   leia(C)
   MA<-(A+B+C)/3
   MH<-3/(1/A+1/B+1/C)
   escreva("Media aritmética de ",A,", ",B," e ",C," é ",MA," e a média harmonica é",MH)
fimalgoritmo
