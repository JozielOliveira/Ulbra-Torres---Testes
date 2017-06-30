algoritmo "Atividade 7"
// Data : 18/04/2017
var
   Ca:caracter
   K,A,B,C:real
inicio
   A<-8
   B<-9
   C<-12
   Escreva("Tipo de carro a,b ou c: ")
   leia(Ca)
   Escreva("Quilometros percoridos: ")
   leia(K)
   Se Ca = "A" entao
      Escreva("Consumo de combustivel aproximado de ",K/A:2," litros")
   Senao
        Se Ca = "B" entao
           Escreva("Consumo de combustivel aproximado de ",K/B:2," litros")
        Senao
           Se Ca = "C" entao
              Escreva("Consumo de combustivel aproximado de ",K/C:2," litros")
           FimSE
        FimSe
   FimSe
fimalgoritmo
