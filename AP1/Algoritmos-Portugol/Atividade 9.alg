algoritmo "Atividade 9"
var
    M,P:real
    D:inteiro
inicio
    Escreva("Qual o porcentagem da multa: ")
    leia(M)
    Escreva("Quantos dias de atraso: ")
    leia(D)
    Escreva("Qual o valor da presta��o: ")
    leia(P)
    P<-P+((P*M)/100)*D
    Escreva("O valor a ser pago � R$",P)
fimalgoritmo
