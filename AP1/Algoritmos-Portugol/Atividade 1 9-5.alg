algoritmo "semnome"

// Data : 09/05/2017

var
  v,s,i,ma,me: inteiro
inicio
      ma<-0
      me<-100
      i<-0
     repita
           Escreva("Escreva um numero:")
           leia(v)
           s<-s+v
           se v > ma entao
              ma<-v
           senao
                se v < me entao
                   me<-v
                fimse
           fimse
           i<-i+1
     ate(s = 100) ou (i = 13) ou (v = 0)

     Escreval("Maior: ",ma)
     Escreval("Menor: ",me)
     Escreval("Total: ",s)
fimalgoritmo
