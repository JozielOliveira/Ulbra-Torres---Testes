#include <stdio.h>
int main(){
    int matriz [10][3];
    int valor = 0;
    int ll = 0;
    int cc = 0;
    int aux;

        for(int l = 0; l< 10; l++){
            for(int c = 0; c < 3; c++){
                printf("Matriz [%i][%i] : ",l,c);
                scanf("%i",&valor);
                
                cc = c;

                if(valor == 0)
                     break;
                
                matriz[l][c] = valor;

            } 
            ll = l;
            if(valor == 0)
                break;
           
        }

        ll ++;

        printf("\nMATRIZ RESUTANTE:\n");

        
            
        for(int l = 0; l< ll; l++){

            if(l == (ll-1))
                aux = cc;
            else
                aux =3;
            
           for(int c = 0; c < aux; c++)
                printf(" %i ",matriz[l][c]);
            
            printf("\n\n");
        }

}