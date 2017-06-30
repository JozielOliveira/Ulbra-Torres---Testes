algoritmo "semnome"

var
R,A,Vl,AL,AB,AC,C,QL:real
L:inteiro
inicio
 Vl<-150
 L<-5*3
 Escreva("Raio: ")
 leia(R)
 Escreva("Altura: ")
 leia(A)
 AL<-2*PI*R*A
 AB<-PI*R^2
 AC<-AL+AB
 QL<-AC/L
 QL<-Int(QL)
 C<-QL*Vl
 escreva("O Custo vai ser de R$",C:2," com ",QL:1," latas")
fimalgoritmo
