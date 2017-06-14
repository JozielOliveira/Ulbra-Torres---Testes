#include<stdio.h>
#include<conio.h>
main(){
//Variaveis
	int gremio = 0;
	int inter = 0;
	int outro = 0;
	int torcida = 0;
//Inicio	
	printf("------------------------\n");
	printf("1 - Gremio \n");
	printf("2 - Inter \n");
	printf("3 - Outro \n");
	printf("0 - Parar \n");
	printf("------------------------\n");
	
	do{
		printf("Digite o numero do time em que torce: ");	
		scanf("%i",&torcida,"\n");
		switch(torcida){
			case 1 : gremio++;
			break;
			case 2 : inter++;
			break;
			case 3: outro++;
			break;
			case 0: printf("Voto encerrado\n"); 
			break;
			default: printf("Digite 1-Gremio ou 2-Inter ou 3-outro \n");
		}
	}while(torcida != 0);
	
	
	printf("\n Gremio %i torcedores, Inter %i torcedores e outro %i torcedores",gremio,inter,outro);

}
