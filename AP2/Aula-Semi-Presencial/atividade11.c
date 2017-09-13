#include <stdio.h>
float main(){
    int vetor[10];
    int valor;
    int a = 0;
    int x,y = 0;
    int cont = 0;

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

    printf("Digite um numero x: ");
    scanf("%i",&x);

    printf("Digite um numero y: ");
    scanf("%i",&y);


    for(int i = 0; i < a; i++){
        if(vetor[x] <= vetor[i]){
            printf("%i",vetor[i]);
            cont++;
            if(cont == 4){
                break;
            }
        }
    }    
    
    cont = 0;
    for(int i = 0; i < a; i++){
        if(vetor[y] <= vetor[i]){
            printf("%i",vetor[i]);
            cont++;
            if(cont == 4){
                break;
            }
        }
    }

    
}