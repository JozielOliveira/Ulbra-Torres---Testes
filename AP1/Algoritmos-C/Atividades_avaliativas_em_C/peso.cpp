#include<stdio.h>
#include<conio.h>
main(){
	
	int ordem,dia,menor,peso;
	
	for(int i = 1 ; i <= 7 ; i++){
		do{
			
			printf("\n Dia da Semana[1 a 7]: ");
			scanf("%i",&dia);			
			
			if(dia> 7 || dia<1){
			
				printf("\n Dia invalido");
			
			}else{
				
				printf("Peso do dia: ");
				scanf("%i",&peso);
				
				if((i==1)||(peso<menor)){
					
					menor = peso;
					ordem = i;
				
				}
			}
		}while(dia> 7 || dia<1);		
	}
	printf("\n Menor peso %i no dia %i",menor,ordem);
}
