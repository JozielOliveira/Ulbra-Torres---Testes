algoritmo "semnome"
// Data : 09/05/2017
var
   prim_I, seg_I, ter_I, qua_I, val: inteiro
inicio
      repita
            Escreva("Escreva um numero: ")
            leia(val)
            se (val >=0) e (val <=25) entao
               prim_I <- prim_I + 1
            senao
                 se (val >=26) e (val <=50) entao
                    seg_I <- seg_I + 1
                 senao
                      se (val >=51) e (val <=75) entao
                         ter_I <- ter_I + 1
                      senao
                           se (val >=76) e (val <=100) entao
                              qua_I <- qua_I + 1
                           fimse
                      fimse
                 fimse
            fimse

      ate (prim_I = 10) ou (seg_I = 10) ou (ter_I = 10) ou (qua_I = 10)
fimalgoritmo
