#include <stdio.h>
float main(){
   int vetor[10];
   int X;
   int tam;
   int aux;

   do{
       printf("Quantos numero voce quer armazenar no vetor [1 até 9]: ");
       scanf("%i",&tam);
   } while( (tam < 1) || (tam > 10));

   for(int i = 0; i < tam; i++){
       printf("Escreva um numero: ");
       scanf("%i",&vetor[i]);
   };

   printf("Digite um numero para ser armazenado na primeira posicao: ");
   scanf("%i",&X);

   tam ++; 
   
   for(int i = tam ; i > 0; i--){
        aux=i-1;
        vetor[i] = vetor[aux];
   };
   vetor[0] = X;
   for(int i = 0; i < tam; i++){

        printf("%i,",vetor[i]);
        
    };
   printf("\n");
}