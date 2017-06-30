algoritmo "Atividade 2"

// Data : 18/04/2017

var
  c:inteiro
  t,g,o,S:real
inicio
  t<-1.5
  g<-1.3
  o<-1.2
  Escreva(" Técnico[1]Gerente[2]Outro[0]: ")
  leia(c)
  Escreva("Salário: ")
  leia(S)
  Se c=1 entao
     S<-S*t
  Senao
       Se c=2 entao
          S<-S*g
       Senao
          S<-S*o
       FimSE
  FimSE
  Escreva("Salário: R$",S)

fimalgoritmo
