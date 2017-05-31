algoritmo "Atividade 6"
// Data : 18/04/2017
var
   Es:caracter
inicio
   Escreval("Seu Estado")
   Escreval("R para Rio Grande do Sul")
   Escreval("S para Santa Catarina")
   Escreval("P para Paraná")
   leia(Es)
   Se Es = "R" entao
      Escreva("Gaúcho")
   Senao
      Se Es = "S" entao
         Escreva("Catarinense")
      Senao
         Se Es = "P" entao
            Escreva("Paranaense")
         Senao
            Escreva("Outro estado")
         FimSE
      FimSE
   FimSE
fimalgoritmo
