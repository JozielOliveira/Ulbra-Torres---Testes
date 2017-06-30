#include<stdio.h>
#include<conio.h>
main(){
	int n;
	printf("Digite um Numero inteiro: ");
	scanf("%i",&n);
	if((n<=1000)&&(n>=100)){
		printf("Este Numero esta entre 100 e 1000");
	}else{
		printf("Este Numero nao esta entre 100 e 1000");
	}
	
}
