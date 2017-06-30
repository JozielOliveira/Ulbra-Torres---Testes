algoritmo "Atividade 8"
// Data : 11/04/2017
var
  S:caracter
  A:real
inicio
   Escreva("Sexo(M ou F): ")
   leia(S)
   Escreva("Escreva o peso: ")
   leia(A)
   Se S="M" entao
    Escreva("O peso ideal é ",(72.7*A)-58)
   Senao
      Se S="F" entao
       Escreva("O peso ideal é ",(62.1*A)-44.7)
      FimSe
   FimSe
fimalgoritmo
