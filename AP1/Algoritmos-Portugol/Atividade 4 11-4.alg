algoritmo "Atividade 4"
// Data : 11/04/2017
var
  A: inteiro
inicio
  Escreva("Escreva um numero: ")
  leia(A)
  Se A<0 entao
     Se A mod 2 = 0 entao
        Escreva("Este numero � par e negativo")
     Senao
        Escreva("Este numero � impar e negativo")
     FimSe
  Senao
     Se A mod 2 = 0 entao
        Escreva("Este numero � par e positivo")
     Senao
        Escreva("Este numero � impar e positivo")
     FimSe
  FimSe
  
fimalgoritmo
