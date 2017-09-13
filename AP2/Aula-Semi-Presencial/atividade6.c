#include <stdio.h>
float main(){
    int gab[13];
    int ponto = 0;

    printf("Digite um 1 para o ganhador da esquerda 2 para o da direita 3 em caso de empate \n");

    for(int i = 0; i < 13; i++){
        printf("Time Ganhador: ");
        scanf("%i",&gab[i]);
    }
    
    printf("\n");

    for(int i = 0; i < 15; i++){
        int alt[13];
        ponto = 0;
        for(int b = 0; b < 13; b++){
            printf("Alternativa: ");
            scanf("%i",&alt[b]);
        }
        for(int a = 0; a < 13; a++){
            
            if(alt [a] == gab[a]){
                ponto++;
            }
        }
        if(ponto == 13){
            printf("Ganhooooooouuuu!!!!!");
        }else{
            printf("Errrrooooooouuu!!");
        }
        printf("\n");
    }

}