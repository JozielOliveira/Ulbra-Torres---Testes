#include<stdio.h>
#include<conio.h>
main(){
	float valor,desc;
	int desconto;
//Inicio	
	printf("------------Desconto------------\n");
	printf("1 - Ouro \n");
	printf("2 - Prata \n");
	printf("3 - Bronze \n");
	printf("4 - Papel \n");
	printf("--------------------------------\n");
	
	printf("Valor do produto : ");	
	scanf("%f",&valor,"\n");
		
	do{
		printf("Digite o tipo de desconto: ");	
		scanf("%i",&desconto,"\n");
		switch(desconto){
			case 1 : 
				desc  = valor*0.3;
				valor = valor-desc;
			break;
			case 2 : 
				desc  = valor*0.25;
				valor = valor-desc;
			break;
			case 3: 
				desc = valor*0.2;
				valor = valor-desc;
			break;
			case 4: 
				desc = valor*0.15;
				valor = valor-desc;
			break;
			default: desconto = 0;
		}
	}while(desconto == 0);	
	
	printf("Desconto: - %.2f",desc);
	printf("\nTotal a ser pago: %2.f",valor);
	

}

