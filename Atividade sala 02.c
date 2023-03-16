#include <stdio.h>
#include <stdlib.h>
#include <locale>

int main (void){
	setlocale(LC_ALL,"portuguese");
	int num,num2,num3;
	
	printf("Digite um número de 1 a 10: ");
	scanf("%d",&num);
	printf("Digite um número de 1 a 10: ");
	scanf("%d",&num2);
	printf("Digite um número de 1 a 10: ");
	scanf("%d",&num3);
	
	if(num==num2==num3){
		printf("todos os números são iguais.");
	}
	else if(num!=num2!=num3){
		printf("todos os números são diferentes.");
	}
	
	if(num>num2>num3){
		printf("%d %d %d",num,num2,num3);
	}
	if(num<num2<num3){
		printf("%d %d %d",num3,num2,num);
	}
	if(num>num2<num3){
		printf("%d %d %d",num3,num,num2);
	}
	if(num<num2>num3&&num<num3){
		printf("%d %d %d",num2,num3,num);
	}
	return 0;

}
