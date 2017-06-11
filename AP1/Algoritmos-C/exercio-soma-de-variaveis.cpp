#include<stdio.h>
#include<conio.h>
main(){
	int a,b,c,soma;
	
	printf("Digite um Numero inteiro: ");
	scanf("%i",&a);
	printf("Digite um Numero inteiro: ");
	scanf("%i",&b);
	printf("Digite um Numero inteiro: ");
	scanf("%i",&c);
	
	soma = a+b+c;
	if (soma>=50){
		printf("A soma dos numero e maior que 50 %i",soma);
	}else{
		printf("A soma dos numero e menor que 50");
	}
}
