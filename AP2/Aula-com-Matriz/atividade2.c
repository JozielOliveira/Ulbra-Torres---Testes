#include <stdio.h>
int main(){

    int matriz [4][4];
    int x;
    int cont = 0;
    
        for(int l = 0; l< 4; l++){
            for(int c = 0; c < 4; c++){
                printf("Matriz [%i][%i] : ",l,c);
                scanf("%i",&matriz[l][c]);
            }
        }

        printf("Digite um numero x : ");
        scanf("%i",&x);

        for(int l = 0; l< 4; l++){
            for(int c = 0; c < 4; c++){
                if( matriz[l][c] == x){
                    cont++;
                }
            }
        }

        printf("O valor %i apareceu %i",x,cont);

}