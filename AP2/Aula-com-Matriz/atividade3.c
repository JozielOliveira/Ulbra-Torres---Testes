#include <stdio.h>
int main(){
    int matriz [4][3];
    int vetor []= {0,0,0,0};

    for(int l = 0; l< 4; l++){
        for(int c = 0; c < 3; c++){
            printf("Matriz [%i][%i] : ",l,c);
            scanf("%i",&matriz[l][c]);
        }
    }

    for(int l = 0; l< 4; l++){
        for(int c = 0; c < 3; c++){
            vetor[l] = vetor[l] + matriz[l][c];
        }
    }

    for(int l = 0; l < 4; l++){
        printf("Linha %i = %i \n",l,vetor[l]);
     }
    
}