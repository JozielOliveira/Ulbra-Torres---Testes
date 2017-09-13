#include <stdio.h>
float main(){
    int vetor[10];
    int valor;
    int a = 0;
    int soma = 0;

    do{
            printf("Digite um numero: ");
            scanf("%i",&valor);
            if(valor > 0){
                vetor[a] = valor;
                a++; 
            }else{
                break;
            }

    }while(a != 10);


    for(int i = 0; i < a; i++){
        if(vetor[i] > 10){
            soma += vetor[i];
        }
    }

printf("Soma: %i \n",soma);
    
}