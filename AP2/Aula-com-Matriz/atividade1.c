#include <stdio.h>
int main(){
    int matriz [3][4];

    for(int l = 0; l< 3; l++){
        for(int c = 0; c < 4; c++){
            printf("Matriz [%i][%i] : ",l,c);
            scanf("%i",&matriz[l][c]);
        }
    }

    printf("\n");

    for(int l = 0; l< 3; l++){
        for(int c = 0; c < 4; c++){
            printf(" %i ",matriz[l][c]*10);
        }
        printf("\n\n");
    }
    
}