#include<stdio.h>
#include<conio.h>
main(){
       float n1,n2,media;
       
       printf("Nota 1: ");
       scanf("%f",&n1);
       printf("Nota 2: ");
       scanf("%f",&n2);
       
       media = (n1+n2*2)/3;
       
       printf("\n Media: %.2f ",media);
       
       
       	if (media >= 9) {
       		
       		printf(" Parabens Nota A");
	   	
		}else{
	   		if(media>=7.5){
	   			
	   			printf(" Parabens sua nota  B");
		   	
			}else{
		   		
				if(media>=6){
		   		
				   	printf(" Parabens sua nota C");
		   		
				   	}else{
		   		
				   		printf("Estuda mais pois sua nota D");
					}
			}
		}
       
       getche();
       
}

