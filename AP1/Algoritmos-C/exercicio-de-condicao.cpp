#include<stdio.h>
#include<conio.h>
main(){
	
	float num;
	
	printf("Digite um numero: ");
	scanf("%f",&num);
	
	if(num > 30){
		num = num/2;
	}else{
		num = num*2;
	}
	
	printf("%.1sf",num);
}
