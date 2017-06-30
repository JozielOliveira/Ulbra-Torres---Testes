#include<stdio.h>
#include<conio.h>
main(){

	int dia;
	
	do{
		printf("\n Dia da Semana[1 a 7]: ");
		scanf("%i",&dia);
		if(dia> 7 || dia<1){
			printf("\n Dia invalido");
		}
	}while(dia> 7 || dia<1);

}
