#include <stdio.h>
int main(){
    int matriz [5][3];
    int valor = 0;

    for(int l = 0; l< 5; l++){
        for(int c = 0; c < 3; c++){

            do{
                printf("Matriz [%i][%i] : ",l,c);
                scanf("%i",&valor);
                if((valor % 2) != 0){
                    matriz[l][c] = valor;
                    break;
                }else{
                    printf("\nDigite um numero impar!!!\n");
                }
            }while(1);
            
        }
    }
    printf("\n");
    
    for(int l = 0; l< 5; l++){
       for(int c = 0; c < 3; c++){
               printf(" %i ",matriz[l][c]);
        }
        printf("\n\n");
    }
}