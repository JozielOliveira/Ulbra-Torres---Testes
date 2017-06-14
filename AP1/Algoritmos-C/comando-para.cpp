#include<stdio.h>
#include<conio.h>
main(){
	int num;
	for(int i = 1; i <= 10;i++){

		printf("Digite um numero: ");
		scanf("%i",&num,"\n");
		
		if(num == 0){
			printf("O numero e 0");
		}else{		
			if(num%2 == 0){
				printf("E par \n");	
			}else{
				printf("E impar \n");
			}	
		}		
	}

}

