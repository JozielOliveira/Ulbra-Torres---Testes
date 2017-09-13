#include <stdio.h>
float main(){
    int R[5];
    int ponto = 0;

    printf("Gabarito \n");

    for(int i = 0; i < 5; i++){
        printf("Alternativa: ");
        scanf("%i",&R[i]);
    }
    
    printf("\n");

    do{
        int A[10];
        ponto = 0;
        for(int b = 0; b < 10; b++){
            printf("Alternativa do apostador: ");
            scanf("%i",&A[b]);
        }
        for(int a = 0; a < 10; a++){
            for(int r = 0; r < 5; r++){
                if(A [a] == R[r]){
                    ponto++;
                }
            } 
        }
        if(ponto == 5){
            printf("Ganhooooooouuuu!!!!!");
        }else{
            printf("Perdeeuuu!!");
        }
        printf("\n");
    }while(ponto<13);

}