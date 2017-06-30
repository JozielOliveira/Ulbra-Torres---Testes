algoritmo "Atividade 10"
var
   A,B,C:caracter
   QA,QB,QC: inteiro
   VA,VB,VC,T:real
inicio
   Escreva("Produto A: ")
   leia(A)
   Escreva("Valor do Produto: ")
   leia(VA)
   Escreva("Quantidade: ")
   leia(QA)
   Escreva("Produto B: ")
   leia(B)
   Escreva("Valor do Produto: ")
   leia(VB)
   Escreva("Quantidade: ")
   leia(QB)
   Escreva("Produto C: ")
   leia(C)
   Escreva("Valor do Produto: ")
   leia(VC)
   Escreva("Quantidade: ")
   leia(QC)
   T<-VA*QA+VB*QB+VC*QC
   Escreval("==============================================")
   Escreval("Produto A: ",A," Quantia: ",QA," Valor: R$",VA)
   Escreval("Produto B: ",B," Quantia: ",QB," Valor: R$",VB)
   Escreval("Produto C: ",C," Quantia: ",QC," Valor: R$",VC)
   Escreval("==============================================")
   Escreval("Total: R$",T)
fimalgoritmo
