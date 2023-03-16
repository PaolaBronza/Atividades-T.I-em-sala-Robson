#include <stdio.h>
#include <stdlib.h>
#include <locale>
#include <math.h>
#include <time.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int num,num2;
	srand(time(NULL));
	num=rand()%11-1;
	printf("digite um número de 1 a 10: ");
	scanf("%d",&num2);
	printf("o número que você digitou é %d",num2);
	
	//número digitado
	if(num2 % 2==0){
			printf("\no número é par");
		}
		else{
			printf("\no número é ímpar");
		}
		if(num2>5){
			printf("\no número é maior que 5");
		}
		else if(num2<5){
			printf("\no número é menor que 5");
		}
		else if(num2==5){
			printf("\no número é igual a 5");
		}
				
	printf("\n\nnúmero da sorte: %d",num);
	
	//número aleatório
	if(num % 2==0){
		printf("\no número é par");
	}
	else{
		printf("\no número é ímpar");
	}
	if(num>5){
		printf("\no número é maior que 5");
	}
	else if(num<5){
		printf("\no número é menor que 5");
	}
	else if(num==5){
		printf("\no número é igual a 5");
	}
	
	//geral
	if(num==num2){
		printf("\n\nseu número é da sorte!");
	}
	else if(num!=num2){
		printf("\n\nseu número não é igual ao número gerado.");
	}
	return 0;
}
