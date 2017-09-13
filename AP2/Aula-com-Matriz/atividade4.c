#include <stdio.h>
int main(){

    int G1 [10][2];
    int G2 [10][2];
    int media [10];

    printf("G1");
    for(int l = 0; l< 10; l++){
        for(int c = 0; c < 2; c++){
            printf("\n %i°Nota do %i° Aluno: ",(c+1),(l+1));
            scanf("%i",&G1[l][c]);
        }
    }

    printf("G2");
    for(int l = 0; l< 10; l++){
        for(int c = 0; c < 2; c++){
            printf("\n %i°Nota do %i° Aluno: ",(c+1),(l+1));
            scanf("%i",&G2[l][c]);
        }
    }

    for(int l = 0; l< 10; l++){
        media[l] = ((( G1[l][0] + G1[l][1] )/2) + (( G1[l][0] + G1[l][1] )/2))/2; 
    }

    for(int l = 0; l< 10; l++){
        printf("%i° Aluno : media %i \n",(l+1),media[l]);
    }

}