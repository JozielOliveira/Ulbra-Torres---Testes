algoritmo "Atividade 11"
// Data : 11/04/2017
var
  D: inteiro
  T1,T2,T3,Total:real
inicio
      T1<-1.5
      T2<-1
      T3<-0.5
  Escreva("Escreva o numero de diarias: ")
  leia(D)
  Se D<15 entao
     Total<-D*50+D*T1
  Senao
     Se D = 15 entao
        Total<-D*50+D*T2
     Senao
        Total<-D*50+D*T3
     FimSe
  FimSe
  Escreva("Total= R$",Total)
  
fimalgoritmo
