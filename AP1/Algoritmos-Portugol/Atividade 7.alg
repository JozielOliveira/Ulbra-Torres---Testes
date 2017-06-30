algoritmo "Atividade 7"
var
SB,SL,Inss,VH,CH:Real
inicio
Escreva ("Escreva o valor do Hora: ")
leia(VH)
Escreva ("Escreva o valor do disconto de INSS: ")
leia(Inss)
Escreva ("Escreva o valor da Hora trabalhada: ")
leia(CH)
SB<-VH*CH
SL<-SB-(SB*Inss)/100

Escreval("===========================")
Escreval("Valor da Hora: R$",VH)
Escreval("Disconto do INSS:",Inss,"%")
Escreval("Horas Trabalhadas: ", CH)
Escreval("Salário Bruto: R$",SB)
Escreval("Salário Liquido: R$",SL)
fimalgoritmo
