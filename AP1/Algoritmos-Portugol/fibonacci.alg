algoritmo "semnome"
// Função : 1-1-2-3-5-8-13-21
// Autor :
// Data : 23/05/2017
// Seção de Declarações 
var
  val,i,antt,ant,num:inteiro
inicio
antt<-1
num<-0
i<-0
leia(val)
repita
se (i mod 2) = 0 entao
ant<-num
senao
antt<-num
fimse
num <-ant+antt
i<-i+1
ate(i=val)
escreva(num)
fimalgoritmo
