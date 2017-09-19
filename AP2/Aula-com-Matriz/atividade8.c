#include <stdio.h>
int main(){
    int matriz [10][3];
    int valor = 0;
    int l = 0;

        while( l < 10 ){

            for(int c = 0; c < 3; c++){
                printf("Matriz [%i][%i] : ",l,c);
                scanf("%i",&valor);

                if(valor == 0)
                     break;
                
                matriz[l][c] = valor;

            } 

            l++;
            
            if(valor == 0)
                break; 
        }

        l ++;

        printf("\nMATRIZ RESUTANTE:\n");
    
        for(int li = 0; li< l; li++){

           for(int c = 0; c < 3; c++){
                if(matriz[li][c] == 0)
                    break;
                printf(" %i ",matriz[li][c]);
            }
            
            printf("\n\n");
        }

}