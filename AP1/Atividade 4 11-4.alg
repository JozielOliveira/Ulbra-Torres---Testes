algoritmo "Atividade 4"
// Data : 11/04/2017
var
  A: inteiro
inicio
  Escreva("Escreva um numero: ")
  leia(A)
  Se A<0 entao
     Se A mod 2 = 0 entao
        Escreva("Este numero é par e negativo")
     Senao
        Escreva("Este numero é impar e negativo")
     FimSe
  Senao
     Se A mod 2 = 0 entao
        Escreva("Este numero é par e positivo")
     Senao
        Escreva("Este numero é impar e positivo")
     FimSe
  FimSe
  
fimalgoritmo
