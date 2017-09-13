#include <stdio.h>
float main(){
    int impar[5];
    int par[5];
    int valor;
    

    for(int y = 0; y < 30; y++){
        int i = 0;
        int p = 0;
        do{
            printf("Digite um numero: ");
            scanf("%i",&valor);

            if(valor == 0){
                break;
            }

            if((valor % 2) == 0){
                par[p] = valor;
                p++;
            }else{
                impar[i] = valor;
                i++;
            }

        }while((i != 4) && (p != 4));
        printf("Impar: \n");
        for(int x = 0; x < i; x++){
            printf("%i",impar[x]);
        }

        printf("\nPar: \n");
        for(int x = 0; x < p; x++){
            printf("%i",par[x]);
        }
        printf("\n");
    }
}