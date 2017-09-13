#include <stdio.h>
float main(){
    char G[20];
    char R[20];
    int ponto;
    char res;

    printf("Digite o gabarito : \n");
    for(int i = 0; i < 20; i++){
        fflush(stdin);
        printf("\nResposta %i: ",i);
        scanf("%c",&G[i]);
        

    }

    printf("\n");

    do{

        ponto = 0;

        printf("Digite as respostas do aluno : \n");

        for(int i = 0; i < 20; i++){
            printf("Resposta %i: ",i);
            scanf("%c",&R[i]);
        }
        for(int a = 0; a < 13; a++){
            
            if(G [a] == R[a]){
                ponto++;
            }
        }
        if(ponto >= 12){
            printf("Aprovado!!!!!");
        }else{
            printf("Reprovado!!");
        }
        printf("\n Consultar um novo gabarito: [s/n]: ");
        scanf("%c",&res);

    }while(res == 's');



}