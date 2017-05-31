algoritmo "semnome"
// Data : 11/04/2017
var
   A,B,C: inteiro
inicio
      Escreva("Escreva um numero: ")
      leia(A)
      Escreva("Escreva um numero: ")
      leia(B)
      Escreva("Escreva um numero: ")
      leia(C)
      Se (A>B) e (C<A)entao
         Escreva(A)
      Senao
           Se (B>A) e (B>C) entao
            Escreva(B)
           Senao
            Escreva(C)
           FimSe
      FimSe
fimalgoritmo
