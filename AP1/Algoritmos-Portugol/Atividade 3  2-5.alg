algoritmo "Atividade 3"
// Data : 03/05/2017
var
    v,s,ma,me:inteiro
inicio
    Escreva("Digite um numero: ")
    leia(v)
    ma<- v
    me<- v
    s<- v
    se (v = 100) ou (v = 0) entao
       escreva("A soma é ",s," o maior numero digitado foi ",ma," e o menor foi ",me)
    senao
          enquanto (s <> 100) e (v <> 0) faca
                se s > 100 entao
                   s<-0
                fimse
                enquanto (s < 100) e (v <> 0)  faca
                    Escreva("Digite um numero: ")
                    leia(v)
                    se v < me entao
                       me<- v
                    senao
                       se v > ma entao
                          ma<-v
                       fimse
                    fimse
                    s <- v+s
                fimenquanto
          fimenquanto
          escreva("A soma é ",s," o maior numero digitado foi ",ma," e o menor foi ",me)
    fimse
fimalgoritmo
