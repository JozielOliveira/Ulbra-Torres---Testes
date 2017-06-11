#include<stdio.h>
#include<conio.h>
main(){
	int cod;
	float sal,nSal;
	
	printf("-------Legenda--------");
	printf("\n -Funcao -------Codigo-");
	printf("\n  Tecnico          1   ");
	printf("\n  Gerente          2   ");
	printf("\n  Outro            0   ");
	printf("\n ----------------------");
	
	printf("\n Digite o codigo da funcao: ");
	scanf("%i",&cod);
	printf("\n Digite o Salario:");
	scanf("%f",&sal);
	
	if(cod == 1){
		nSal = sal*1.5;
	}else{
		if(cod == 2){
			nSal = sal*1.3;	
		}else{
			nSal = sal*1.2;
		}
	}
	
	printf(" O novo salario e  %.2f",nSal);
}
