algoritmo "Atividade 2"
// Data : 03/05/2017
var
    v,s,ma,me:inteiro
inicio
    Escreva("Digite um numero: ")
    leia(v)
    ma<- v
    me<- v
    s<- v
    se v <> 100 entao
          enquanto s <> 100 faca
                enquanto s<100  faca
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
                se s > 100 entao
                   s<-0
                fimse
          fimenquanto
    fimse
    escreva("A soma é ",s," o maior numero digitado foi ",ma," e o menor foi ",me)
fimalgoritmo
