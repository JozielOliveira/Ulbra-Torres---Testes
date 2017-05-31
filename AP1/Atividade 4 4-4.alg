algoritmo "semnome"

var
   x,y,D,M:inteiro

inicio
   Escreva("Escreva um valor para X: ")
   leia (x)
   Escreva("Escreva um valro para Y: ")
   leia (y)
   M <- x mod y
   D <- x div y
   escreva("O quociente de ",x,"/",y," é ",D," e o resto de ",x,"/",y," é",M)
fimalgoritmo
