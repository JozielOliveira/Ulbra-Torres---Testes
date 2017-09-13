#include <stdio.h>
float main(){
    int vetor[30];
    int valor;
    int a = 0;

    for(int i = 0; i< 30; i++){
        printf("Digite um numero: ");
        scanf("%i",&valor);
        if(valor > 0){
            vetor[a] = valor;
            a++;
        }
    }
    for(int i = 0; i < a; i++){
        printf("%i",vetor[i]);
    }
    
}