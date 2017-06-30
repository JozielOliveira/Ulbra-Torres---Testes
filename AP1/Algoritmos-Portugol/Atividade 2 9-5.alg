algoritmo "semnome"
// Data : 09/05/2017
var
   num,i,cont,soma,val: inteiro
inicio
  Escreval("1) Soma 2 valores inteiro")
  Escreval("2) Soma 3 valores inteiro")
  Escreval("3) Não irá somar")
  Escreval("--------------------------")
  repita
        Escreva("Escreva um numero entre 1 e 3: ")
        leia(num)
        se (num <> 1) e (num <> 2) e (num <> 3)   entao
          escreval( "Só pode ser digitado 1, 2 ou 3" )
        fimse
  ate (num = 1) ou (num = 2) ou (num = 3)

  se num = 1 entao
     cont<- 2
  senao
       se num = 2 entao
          cont<- 3
       fimse
  fimse
  enquanto i < cont faca
           Escreva("Escreva um numere inteiro: ")
           leia(val)
           soma<-soma+val
           i<-i+1
  fimenquanto
  Escreva("Total da soma: ",soma)
fimalgoritmo
