#include<stdio.h>
#include<conio.h>
main(){
	
	int idade;
	
	do{
		
		printf("Idade: ");
		scanf("%i",&idade,"\n");
		
		if( idade < 0 || idade > 100 ){
			printf("Idade invalido \n");	
		}else{
			if( idade >= 18 && idade <60 ){
				printf("\n Voto Obrigatorio");
			}else{
				printf("\n Voto nao obrigatorio ");
			}
		}
		
	}while( idade < 0 || idade > 100 );

}
