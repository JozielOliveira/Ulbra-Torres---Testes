algoritmo "Atividade 11"
// Data : 18/04/2017
var
  ES,EMX,EMN,EMD:inteiro
inicio
  Escreva("Capacidade Máxima do Estoque: ")
  leia(EMX)
  Escreva("Capacidade Mínima do Estoque: ")
  leia(EMN)
  Escreva("Quantidae de produtos em estoque: ")
  leia(ES)
  EMD<-int((EMX+EMN)/2)
  Se ES>=EMD entao
     Escreva("Não efutuar compra")
  Senao
     Escreva("Efetuar compra")
  FimSe
fimalgoritmo
