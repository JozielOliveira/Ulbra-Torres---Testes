algoritmo "Atividade 13"
// Data : 11/04/2017
var
  N1,N2,N3,CA,m:real
inicio
      Escreva("Escreva o codigo do aluno: ")
      leia(CA)
      Escreva("Escreva a 1° nota: ")
      leia(N1)
      Escreva("Escreva a 2° nota: ")
      leia(N2)
      Escreva("Escreva a 3° nota: ")
      leia(N3)
      Se (N1>N2) e (N1>N3) entao
         Escreva((N1*4+N2*3+N3*3)/10)
      Senao
         Se (N2>N1) e (N2>N3) entao
            Escreva ((N2*4+N1*3+N3*3)/10)
         Senao
            Escreva((N3*4+N2*3+N1*3)/10)
         FimSe
      FimSe
fimalgoritmo
