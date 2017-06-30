algoritmo "Atividade 9"
var
    M,P:real
    D:inteiro
inicio
    Escreva("Qual o porcentagem da multa: ")
    leia(M)
    Escreva("Quantos dias de atraso: ")
    leia(D)
    Escreva("Qual o valor da prestação: ")
    leia(P)
    P<-P+((P*M)/100)*D
    Escreva("O valor a ser pago é R$",P)
fimalgoritmo
